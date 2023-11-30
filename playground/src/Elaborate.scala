import circt.stage._

object Elaborate extends App {
  def top = new GCD()
  val generator = Seq(chisel3.stage.ChiselGeneratorAnnotation(() => top))

  (new ChiselStage).execute(args, generator :+ CIRCTTargetAnnotation(CIRCTTarget.Verilog):+
    FirtoolOption("-disable-all-randomization"):+
    FirtoolOption("-strip-debug-info")
  )
}
