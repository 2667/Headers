//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NearbyVideoAuthDeleteRequestItem, NearbyVideoAuthUploadRequestItem;

@interface NearbyVideoAuthEngine : NSObject
{
    NearbyVideoAuthUploadRequestItem *_uploadReq;
    NearbyVideoAuthDeleteRequestItem *_deleteReq;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)requestDeleteAuthVideo:(id)arg1 completeBlock:(CDUnknownBlockType)arg2;
- (void)requestUploadAuthVideo:(id)arg1 completeBlock:(CDUnknownBlockType)arg2;

@end
