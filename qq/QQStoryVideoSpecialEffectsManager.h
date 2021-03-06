//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <QQMainProject/SDAVAssetExportSessionDelegate-Protocol.h>

@class CIContext, NSMutableArray, NSMutableDictionary, NSString, QQSubtitleImageGenerator, UIImage;

@interface QQStoryVideoSpecialEffectsManager : NSObject <SDAVAssetExportSessionDelegate>
{
    CIContext *_filterContext;
    UIImage *_doodleImage;
    QQSubtitleImageGenerator *_subtitleData;
    struct CGRect _subtitleDrawRect;
    double _frameTime;
    unsigned long long _frameIndex;
    NSMutableDictionary *_filterDict;
    NSMutableArray *_effectTasks;
}

+ (void)exportPictureToAlbumLibraryWithImage:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
+ (void)exportVideoToAlbumLibraryWithAssetUrl:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
+ (id)shareManager;
@property(retain, nonatomic) NSMutableArray *effectTasks; // @synthesize effectTasks=_effectTasks;
- (void).cxx_destruct;
- (struct CGRect)transformRectToVideoRec:(struct CGRect)arg1 videoSize:(struct CGSize)arg2;
- (void)addBackgroundMiusicWithVideoUrlStr:(id)arg1 audioUrl:(id)arg2 outPutPath:(id)arg3 withCompletionHandler:(CDUnknownBlockType)arg4;
- (void)exportSession:(id)arg1 renderFrame:(struct __CVBuffer *)arg2 withPresentationTime:(CDStruct_1b6d18a9)arg3 toBuffer:(struct __CVBuffer *)arg4;
- (void)addEffectTask:(id)arg1;
- (void)removeEffectTask:(id)arg1;
- (id)p_filterVideo:(id)arg1 withMediaType:(unsigned long long)arg2 withFilter:(id)arg3 outputVideoSettings:(id)arg4 outputAudioSettings:(id)arg5 outputUrl:(id)arg6 withCompletionHandler:(CDUnknownBlockType)arg7;
- (_Bool)p_isBelowIphone4;
- (id)p_reversehVideo:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (id)p_scaleAssetPlaySpeedAsynchronously:(id)arg1 scale:(double)arg2 isSilence:(_Bool)arg3;
- (id)p_reversehVideo:(id)arg1 outputUrl:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (id)p_scaleAssetPlaySpeedAsynchronously:(id)arg1 outputUrl:(id)arg2 scale:(double)arg3 isSilence:(_Bool)arg4 withCompletionHandler:(CDUnknownBlockType)arg5;
- (id)p_filterVideo:(id)arg1 withMediaType:(unsigned long long)arg2 isHD:(_Bool)arg3 withFilter:(id)arg4 outputUrl:(id)arg5 withCompletionHandler:(CDUnknownBlockType)arg6;
- (id)scaleAssetToLongestSideAsynchronously:(id)arg1 force:(_Bool)arg2 toSide:(double)arg3 outputPath:(id)arg4 withCompletionHandler:(CDUnknownBlockType)arg5;
- (id)scaleAssetToLongestSideAsynchronously:(id)arg1 toSide:(double)arg2 outputPath:(id)arg3 withCompletionHandler:(CDUnknownBlockType)arg4;
- (id)reverse:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (id)dealForwardAsynchronously:(id)arg1 withType:(int)arg2 isSilence:(_Bool)arg3;
- (id)dealFilterAsynchronously:(id)arg1 withType:(int)arg2 withMediaType:(unsigned long long)arg3 withOverlay:(id)arg4 withSubtitle:(id)arg5 withFilter:(id)arg6 isSilence:(_Bool)arg7 outputVideoSettings:(id)arg8 outputAudioSettings:(id)arg9 outputPath:(id)arg10 withCompletionHandler:(CDUnknownBlockType)arg11;
- (id)addSubtitleToVideoAsynchronously:(id)arg1 subtitleData:(id)arg2 outputPath:(id)arg3 withCompletionHandler:(CDUnknownBlockType)arg4;
- (id)addOverlayToVideoAsynchronously:(id)arg1 overlay:(id)arg2 outputPath:(id)arg3 overlayPoint:(struct CGPoint)arg4 withCompletionHandler:(CDUnknownBlockType)arg5;
- (id)addOverlayToVideoAsynchronously:(id)arg1 overlay:(id)arg2 outputPath:(id)arg3 withCompletionHandler:(CDUnknownBlockType)arg4;
- (id)mergeVideosAsynchronously:(id)arg1 outputPath:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (id)dealFilterSimAsynchronously:(id)arg1 withMediaType:(unsigned long long)arg2 isHD:(_Bool)arg3 withSubtitle:(id)arg4 withFilter:(id)arg5 outputPath:(id)arg6 withCompletionHandler:(CDUnknownBlockType)arg7;
- (id)dealWithVideoAsynchronously:(id)arg1 withType:(int)arg2 outputPath:(id)arg3 withCompletionHandler:(CDUnknownBlockType)arg4;
- (id)dealWithVideoAsynchronously:(id)arg1 withType:(int)arg2 withMediaType:(unsigned long long)arg3 isHD:(_Bool)arg4 withFilter:(id)arg5 isSilence:(_Bool)arg6 outputPath:(id)arg7 withCompletionHandler:(CDUnknownBlockType)arg8;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

