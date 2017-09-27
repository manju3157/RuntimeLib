//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/ashchauhan/Desktop/SampleApp/OnePoint/Runtime/Common/IOM/IInterviewInfo.java
//
//  Created by ashchauhan on 6/20/14.
//

//#ifndef _IInterviewInfo_H_
//#define _IInterviewInfo_H_

#import <Foundation/Foundation.h>
@protocol IProperties;
#import "InterviewModes.h"
#import "ScriptReader.h"

@protocol IInterviewInfo < NSObject>
- (NSString *)getBrowser;
- (id<IProperties>)getBrowserCapabilities;
- (NSString *)getDataEntryMode;
- (NSDate *)getElaspedTime;
- (NSString *)getInterviewerID;
- (InterviewModes)getInterviewMode;
- (BOOL)getIsAutoAnswer;
- (BOOL)getIsDebug;
- (BOOL)getIsRestart;
- (BOOL)getIsReview;
- (NSString *)getLastAsked;
- (NSDate *)getLastAskedTime;
- (id)getOrigin;
- (NSString *)getOriginName;
- (long)getPagesAnswered;
- (long)getPagesAsked;
- (long)getRandomSeed;
- (long)getRespondantID;
- (long)getReversalSeed;
- (long)getRotationSeed;
- (NSDate *)getServerTime;
- (long)getServerTimeZone;
- (NSDate *)getStartTime;
- (long)getTimeouts;
- (NSString *)getBatchID;
- (void)setBatchID:(NSString *)value;
- (NSString *)getBatchName;
- (void)setBatchName:(NSString *)value;
- (long)getEstimatedPages;
- (void)setEstimatedPages:(long)value;
-(BOOL)getEstimatedProgressSet;
- (void)setEstimatedProgressSet:(BOOL)value;
- (id)getestimatedprogress;
- (void)setestimatedprogress:(id)value;
- (long)getInterviewerTimeZone;
- (void)setInterviewerTimeZone:(long)value;
- (BOOL)getIsRemoved;
- (void)setIsRemoved:(BOOL)value;
- (BOOL)getIsTest;
- (void)setIsTest:(BOOL)value;
- (long)getMaxOpcodesExecuted;
- (void)setMaxOpcodesExecuted:(long)value;
- (long)getMaxQuestionsOnReplay;
- (void)setMaxQuestionsOnReplay:(long)value;
- (long)getMaxTestErrors;
- (void)setMaxTestErrors:(long)value;
- (NSString *)getRenderer;
- (void)setRenderer:(NSString *)value;
- (long)getRespondantTimeZone;
- (void)setRespondantTimeZone:(long)value;
- (int)getSerial;
- (void)setSerial:(int)value;
- (BOOL)getUseKeyCodes;
- (void)setUseKeyCodes:(BOOL)value;
- (BOOL)getUsePlayerNavigation;
- (void)setUsePlayerNavigation:(BOOL)value;
- (NSString *)getUser1;
- (void)setUser1:(NSString *)value;
- (NSString *)getUser2;
- (void)setUser2:(NSString *)value;
- (NSString *)getUser3;
- (void)setUser3:(NSString *)value;
- (NSString *)getUser4;
- (void)setUser4:(NSString *)value;
- (NSString *)getUser5;
- (void)setUser5:(NSString *)value;
- (NSString *)getUser6;
- (void)setUser6:(NSString *)value;
- (NSString *)getUser7;
- (void)setUser7:(NSString *)value;
- (NSString *)getUser8;
- (void)setUser8:(NSString *)value;
- (NSString *)getUser9;
- (void)setUser9:(NSString *)value;
- (NSString *)getUser10;
- (void)setUser10:(NSString *)value;
-(NSData *)serialize;
-(void)deserializeWithScriptReader:(ScriptReader *)reader;
@end

// _IInterviewInfo_H_
