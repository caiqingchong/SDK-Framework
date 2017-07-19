
Pod::Spec.new do |s|

 


  spec.name         = 'trs_ta_sdk'
  spec.version      = ‘1.4.0’
  spec.license      = { :type => 'MIT' }
  spec.homepage     = 'https://github.com/caiqingchong/SDK-Framework'
  spec.authors      = { '张凯' => '2273034940@qq.com' }
  spec.summary      = 'ARC and GCD Compatible trs_ta_sdk Class for iOS .'
  spec.source       = { :git => 'https://github.com/caiqingchong/SDK-Framework.git', :tag => ‘1.4.0’ }
  spec.source_files = 'trs_ta_sdk.{h,m}'
  spec.framework    = 'SystemConfiguration’,’CoreTelephony’
 s.social_media_url   = "https://github.com/caiqingchong"
  s.requires_arc = true
end








