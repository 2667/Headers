//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface AFEEyeConfig : NSObject
{
    _Bool _wifionly;
    long long _retry;
    long long _stepPerSession;
    long long _timeOut;
    long long _maxSteps;
    NSString *_faceQuality;
    long long _spoofDetection;
    long long _facePressRate;
    long long _diagnose;
}

+ (id)defaultConfig;
@property(nonatomic) long long diagnose; // @synthesize diagnose=_diagnose;
@property(nonatomic) _Bool wifionly; // @synthesize wifionly=_wifionly;
@property(nonatomic) long long facePressRate; // @synthesize facePressRate=_facePressRate;
@property(nonatomic) long long spoofDetection; // @synthesize spoofDetection=_spoofDetection;
@property(copy, nonatomic) NSString *faceQuality; // @synthesize faceQuality=_faceQuality;
@property(nonatomic) long long maxSteps; // @synthesize maxSteps=_maxSteps;
@property(nonatomic) long long timeOut; // @synthesize timeOut=_timeOut;
@property(nonatomic) long long stepPerSession; // @synthesize stepPerSession=_stepPerSession;
@property(nonatomic) long long retry; // @synthesize retry=_retry;
- (void).cxx_destruct;

@end

