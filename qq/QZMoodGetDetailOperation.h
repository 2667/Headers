//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TlibDy/QZBaseOperation.h>

@class QZMoodOperation;

@interface QZMoodGetDetailOperation : QZBaseOperation
{
    QZMoodOperation *_parentOperation;
}

@property __weak QZMoodOperation *parentOperation; // @synthesize parentOperation=_parentOperation;
- (void).cxx_destruct;
- (void)updateFeedPhoto:(id)arg1 model:(id)arg2;
- (void)sendSinglePhotoMoodUploadFinishedMessage:(id)arg1 retryCount:(long long)arg2;
- (void)sendMoodError:(id)arg1;
- (void)execute;
- (void)cancelJob:(_Bool)arg1;
- (id)moodJob;
- (void)dealloc;

@end
