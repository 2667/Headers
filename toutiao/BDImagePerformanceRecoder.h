//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSError, NSString;

@interface BDImagePerformanceRecoder : NSObject
{
    NSString *_identifier;
    NSString *_category;
    double _overallStartTime;
    long long _options;
    NSError *_error;
    double _width;
    double _height;
    double _cacheSeekStartTime;
    double _cacheSeekEndTime;
    unsigned long long _cacheType;
    double _downloadStartTime;
    double _downloadEndTime;
    double _DNSDuration;
    double _connetDuration;
    double _sslDuration;
    double _sendDuration;
    double _waitDuration;
    double _receiveDuration;
    double _kbSize;
    unsigned long long _codeType;
    double _decodeStartTime;
    double _decodeEndTime;
    double _overallEndTime;
}

@property(nonatomic) double overallEndTime; // @synthesize overallEndTime=_overallEndTime;
@property(nonatomic) double decodeEndTime; // @synthesize decodeEndTime=_decodeEndTime;
@property(nonatomic) double decodeStartTime; // @synthesize decodeStartTime=_decodeStartTime;
@property(nonatomic) unsigned long long codeType; // @synthesize codeType=_codeType;
@property(nonatomic) double kbSize; // @synthesize kbSize=_kbSize;
@property(nonatomic) double receiveDuration; // @synthesize receiveDuration=_receiveDuration;
@property(nonatomic) double waitDuration; // @synthesize waitDuration=_waitDuration;
@property(nonatomic) double sendDuration; // @synthesize sendDuration=_sendDuration;
@property(nonatomic) double sslDuration; // @synthesize sslDuration=_sslDuration;
@property(nonatomic) double connetDuration; // @synthesize connetDuration=_connetDuration;
@property(nonatomic) double DNSDuration; // @synthesize DNSDuration=_DNSDuration;
@property(nonatomic) double downloadEndTime; // @synthesize downloadEndTime=_downloadEndTime;
@property(nonatomic) double downloadStartTime; // @synthesize downloadStartTime=_downloadStartTime;
@property(nonatomic) unsigned long long cacheType; // @synthesize cacheType=_cacheType;
@property(nonatomic) double cacheSeekEndTime; // @synthesize cacheSeekEndTime=_cacheSeekEndTime;
@property(nonatomic) double cacheSeekStartTime; // @synthesize cacheSeekStartTime=_cacheSeekStartTime;
@property(nonatomic) double height; // @synthesize height=_height;
@property(nonatomic) double width; // @synthesize width=_width;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(nonatomic) long long options; // @synthesize options=_options;
@property(nonatomic) double overallStartTime; // @synthesize overallStartTime=_overallStartTime;
@property(copy, nonatomic) NSString *category; // @synthesize category=_category;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
@property(readonly, nonatomic) double overallDuration;
@property(readonly, nonatomic) double decodeDuration;
@property(readonly, nonatomic) double cacheSeekDuration;
@property(readonly, nonatomic) double downloadDuration;

@end
