
Pod::Spec.new do |s|

   s.name        = "trs_ta_sdk" 
  s.version      = "1.4.0"        
  s.license      = "MIT"           
  s.summary      = "A delightful collection of SDK"  

  s.homepage     = "https://github.com/caiqingchong/SDK-Framework"  
  s.source       = { :git => "https://github.com/caiqingchong/SDK-Framework.git", :tag => s.version } 
  
  s.requires_arc = true  
  s.platform     = :ios, "7.0"  
  s.frameworks   = "UIKit", "Foundation","CoreTelephony" 
  s.vendored_frameworks = 'trs_ta_sdk.framework' 
  s.author             = { '张凯' => '2273034940@qq.com'}  
  s.social_media_url   = "https://github.com/caiqingchong" 
end
