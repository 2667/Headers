//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@interface TWTRAPIServiceConfigRegistry : NSObject
{
    NSMutableDictionary *_registeredConfigs;
}

+ (id)defaultRegistry;
@property(readonly, nonatomic) NSMutableDictionary *registeredConfigs; // @synthesize registeredConfigs=_registeredConfigs;
- (void).cxx_destruct;
- (id)configForType:(long long)arg1;
- (void)registerServiceConfig:(id)arg1 forType:(long long)arg2;
- (id)init;

@end

