//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBComposeJob.h"

@class WBStoryItemSegmentDetail;

@interface WBShareStoryJob : WBComposeJob
{
    WBStoryItemSegmentDetail *_segmentDetail;
}

+ (Class)supervisorClass;
+ (Class)operationClass;
@property(retain, nonatomic) WBStoryItemSegmentDetail *segmentDetail; // @synthesize segmentDetail=_segmentDetail;
- (void).cxx_destruct;
- (void)queueOperation:(id)arg1 didFinishWithResult:(id)arg2;
- (void)queueOperation:(id)arg1 didFailureWithError:(id)arg2;
- (id)sendFailedStatus;
- (_Bool)forceUploadLog;
- (id)jobTypeString;
- (_Bool)logEnabled;
- (_Bool)canAddToDraft;
- (void)loadFromRS:(id)arg1;
- (_Bool)updateDB:(id)arg1;
- (_Bool)insertIntoDB:(id)arg1;
- (id)init;

@end

