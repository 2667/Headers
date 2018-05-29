//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class AWELivePresentQueueManager, IESCamera, NSString;
@protocol AWELiveRecordDealStickerPresentHandlerDelegate;

@interface AWELiveRecordDealStickerPresentHandler : NSObject
{
    _Bool _isShowingPresent;
    _Bool _shutdown;
    AWELivePresentQueueManager *_presentManager;
    id <AWELiveRecordDealStickerPresentHandlerDelegate> _delegate;
    IESCamera *_camera;
    NSString *_resetStickerPath;
}

@property(retain, nonatomic) NSString *resetStickerPath; // @synthesize resetStickerPath=_resetStickerPath;
@property(nonatomic) _Bool shutdown; // @synthesize shutdown=_shutdown;
@property(nonatomic) __weak IESCamera *camera; // @synthesize camera=_camera;
@property(nonatomic) _Bool isShowingPresent; // @synthesize isShowingPresent=_isShowingPresent;
@property(nonatomic) __weak id <AWELiveRecordDealStickerPresentHandlerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak AWELivePresentQueueManager *presentManager; // @synthesize presentManager=_presentManager;
- (void).cxx_destruct;
- (void)_removePresent:(id)arg1;
- (void)_applyPresent:(id)arg1;
- (void)stopHandle;
- (void)_stopStickerPresent:(id)arg1;
- (void)_startHandle;
- (void)handleStickerPresentWithCamera:(id)arg1;

@end

