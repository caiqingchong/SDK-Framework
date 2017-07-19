
Pod::Spec.new do |s|



 s.name        = "SDK-Framework" 
  s.version      = "1.4.0"       
  s.license      = "MIT"           
  s.summary      = "A delightful collection of SDK"  

  s.homepage     = "https://github.com/caiqingchong/SDKFramework"  
  s.source       = { :git => "https://github.com/caiqingchong/SDKFramework.git", :tag => s.version } 
  s.source_files = "真机模拟器合并/*.{h,m}"  
  s.requires_arc = true  
  s.platform     = :ios, "7.0"  
  s.frameworks   = "UIKit", "Foundation","CoreTelephony"
   
  s.author             = { "张凯" => "2273034940@qq.com"}  
  s.social_media_url   = "https://github.com/caiqingchong" 

end
