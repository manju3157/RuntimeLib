//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/ashchauhan/Desktop/SampleApp/OnePoint/Player/Xml/XmlControls/XmlNavigation.java
//
//  Created by ashchauhan on 3/11/14.
//

//#ifndef _OnePointPlayerXmlXmlControlsXmlNavigation_H_
//#define _OnePointPlayerXmlXmlControlsXmlNavigation_H_


#import "XmlControl.h"
#import "XmlStyle.h"
#import "XmlLabel.h"
#import "NavButtonType.h"
#import "IQuestion.h"
#import "INavigation.h"
#import "Interview.h"
@interface XmlNavigation : XmlControl {
}

- (id)initWithInterview:(Interview*)interview withQuestion:(id<IQuestion>)question;
-(NSString*)navType:(id<INavigation>)navigation;
@end

//#endif // _OnePointPlayerXmlXmlControlsXmlNavigation_H_
