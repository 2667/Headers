//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface AWELiveHostModel : NSObject
{
    NSString *_host;
    NSArray *_ipArray;
    double _lastResolvingTime;
    long long _resolvingTime;
}

+ (id)replaceHostWithIp:(id)arg1 domain:(id)arg2 ofUrl:(id)arg3;
+ (id)replaceHostWithIp:(id)arg1 ofUrl:(id)arg2;
@property(nonatomic) long long resolvingTime; // @synthesize resolvingTime=_resolvingTime;
@property(nonatomic) double lastResolvingTime; // @synthesize lastResolvingTime=_lastResolvingTime;
@property(retain, nonatomic) NSArray *ipArray; // @synthesize ipArray=_ipArray;
@property(copy, nonatomic) NSString *host; // @synthesize host=_host;
- (void).cxx_destruct;
- (void)sortIPArray;
- (id)recommendIPExceptHost:(id)arg1;
- (id)recommendIP;

@end

