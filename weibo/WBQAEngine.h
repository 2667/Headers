//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class SNHTTPRequestOperationWrapper;

@interface WBQAEngine : NSObject
{
    SNHTTPRequestOperationWrapper *fetchRequestOperationWrapper;
    SNHTTPRequestOperationWrapper *loadExtendPropertyRequestOperationWrapper;
    SNHTTPRequestOperationWrapper *noPaySurroundRequestOperationWrapper;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)applicationWillEnterForeground;
- (void)cancelLoading;
- (void)noPaySurroundWithParams:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)loadQAOfObjectId:(id)arg1;
- (void)loadExtendPropertyWithObjectId:(id)arg1 optionalParams:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)loadQADetailWithObjectId:(id)arg1 extParams:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)dealloc;
- (id)init;

@end

