//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface LiveFeedBackDataManager : NSObject
{
}

+ (id)sharedInstance;
- (void)uploadImage:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_postFeedbackMessage:(id)arg1 log:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)postFeedbackMessage:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchFeedBackMessageFromRemote:(CDUnknownBlockType)arg1;
- (void)fetchFeedbackMessageFromLocal:(CDUnknownBlockType)arg1;
- (void)clear;
- (_Bool)saveNewestFeedbackID:(id)arg1;
- (id)fetchNewestFeedbackID;
- (id)persistFeedbackModel:(id)arg1;
- (id)fetchFeedbackFromLocal;

@end
