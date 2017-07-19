
Pod::Spec.new do |s|



  s.name         = "trs_ta_sdk"
  s.version      = "1.4.0"
  s.summary      = "A short description of trs_ta_sdk."

 
  s.homepage     = "https://github.com/caiqingchong/SDK-Framework"



  s.license      = "MIT"
  # s.license      = { :type => "MIT", :file => "FILE_LICENSE" }



  s.author             = { "张凯" => "2273034940@qq.com" }



  s.source       = { :git => "https://github.com/caiqingchong/SDK-Framework.git", :tag => "1.4.0" }


s.requires_arc = true 
  s.platform     = :ios, "7.0" 
  s.frameworks   = "UIKit", "Foundation","CoreTelephony"


end
