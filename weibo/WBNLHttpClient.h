//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface WBNLHttpClient : NSObject
{
}

+ (id)sharedHttpClient;
- (void)postPath:(id)arg1 parameters:(id)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
- (id)getFiltrParam:(id)arg1;
- (void)loadURLRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)completeParametersWithPath:(id)arg1 path:(id)arg2;
- (id)completeParameters:(id)arg1 filtrParam:(id)arg2;
@property(readonly, copy, nonatomic) NSString *secData;

@end

