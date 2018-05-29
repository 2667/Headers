//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class MMA_Config, NSArray;

@interface MMA_SDKConfig : NSObject
{
    MMA_Config *_config;
    NSArray *_companies;
}

+ (id)getConfigTagNameWithCompany:(id)arg1 withTag:(id)arg2;
+ (_Bool)plistStringToBoolean:(id)arg1;
+ (id)sharedInstance;
@property(retain) NSArray *companies; // @synthesize companies=_companies;
@property(retain) MMA_Config *config; // @synthesize config=_config;
- (void).cxx_destruct;
- (void)updateFromNetwork;
- (void)loadFromLocalDirectoryByRetry:(_Bool)arg1;
- (id)init;

@end

