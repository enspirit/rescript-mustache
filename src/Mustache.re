[@bs.module "mustache"] [@bs.val]
external render : string => Js.t({..}) => ~partials:Js.t({..})=? => unit => string = "render";
