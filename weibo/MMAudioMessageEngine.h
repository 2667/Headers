//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMFileMessageBaseEngine.h"

@class MMAudioFileSendOperation;

@interface MMAudioMessageEngine : MMFileMessageBaseEngine
{
    MMAudioFileSendOperation *_currentAudioSendOperation;
}

@property(retain, nonatomic) MMAudioFileSendOperation *currentAudioSendOperation; // @synthesize currentAudioSendOperation=_currentAudioSendOperation;
- (void).cxx_destruct;
- (void)sendAudioReadStatus:(id)arg1;
- (void)resendAllAudioReadStatus;
- (void)sendAudioReadStatusForGroupMessage:(id)arg1;
- (void)sendAudioReadStatusForMessage:(id)arg1;
- (void)cancelCurrentAudioMessage;
- (void)sendAudioSliceMessage:(id)arg1;
- (void)dealloc;

@end

