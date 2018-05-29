//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBComposeElement.h"

#import "MPTWBVideoEditViewControllerDelegate-Protocol.h"
#import "WBALAssetPickerContextManagerDelegate-Protocol.h"
#import "WBComposeImagesElementViewDelegate-Protocol.h"
#import "WBImageEditorCacheManagerDelegate-Protocol.h"
#import "WBVideoCropViewControllerDelegate-Protocol.h"
#import "WBVideoEditorControllerDelegate-Protocol.h"
#import "WBVideoEditorViewControllerDelegate-Protocol.h"
#import "WBVideoTagPickDelegate-Protocol.h"

@class NSArray, NSMutableArray, NSNumber, NSString, WBALAssetPickerContextManager, WBComposeGifAttachment, WBComposeImagesElementView, WBImageEditorCacheManager, WBVideoEditorCache;

@interface WBComposeImagesElement : WBComposeElement <WBVideoCropViewControllerDelegate, MPTWBVideoEditViewControllerDelegate, WBVideoEditorControllerDelegate, WBALAssetPickerContextManagerDelegate, WBVideoEditorViewControllerDelegate, WBVideoTagPickDelegate, WBComposeImagesElementViewDelegate, WBImageEditorCacheManagerDelegate>
{
    _Bool _isHighQualityFromDraft;
    NSMutableArray *_orientationChangedCaches;
    WBVideoEditorCache *_currentVideoCacheForTagsEditing;
    _Bool _isHidenCaremaButton;
    _Bool _isVideoTagsChanged;
    _Bool _uploadUsingHighQuality;
    _Bool _needResend;
    _Bool _videoNeedResend;
    _Bool _hasImageLocation;
    _Bool _canEditImages;
    _Bool _canEditVideos;
    _Bool _needOverlay;
    _Bool _showAddMoreAlways;
    _Bool _isLivePhotoAllowed;
    _Bool _isGifAllowed;
    _Bool _isPanoramaAllowed;
    _Bool _isSupportPreviewMultiImageEnterEditView;
    _Bool _isShouldKeepInitialFilterOrSticker;
    _Bool _isHidenCameraButtonOnce;
    _Bool _isSingleSelectOnce;
    _Bool _isKeepInitialFilterOrStickerOnce;
    _Bool _isVipSticker;
    _Bool _isShowBarSticker;
    _Bool _allowsVipSubscribe;
    int _limitPickerType;
    WBImageEditorCacheManager *_imageCacheManager;
    long long _mediaPickType;
    unsigned long long _initialSelectCount;
    NSString *_initialSelectedFilterID;
    NSString *_initialSelectedStickerID;
    NSString *_initialSourceUICode;
    unsigned long long _maxAllowSelectCount;
    NSArray *_customStickersArray;
    NSString *_getStickerIDs;
    WBALAssetPickerContextManager *_picerManager;
    WBComposeGifAttachment *_selectedGifAttachment;
    NSArray *_oldVideoTags;
    NSString *_oldVideoTitle;
    NSString *_cacheVideoTitle;
    struct CLLocationCoordinate2D _currentImageCoordinate;
}

@property(copy, nonatomic) NSString *cacheVideoTitle; // @synthesize cacheVideoTitle=_cacheVideoTitle;
@property(copy, nonatomic) NSString *oldVideoTitle; // @synthesize oldVideoTitle=_oldVideoTitle;
@property(retain, nonatomic) NSArray *oldVideoTags; // @synthesize oldVideoTags=_oldVideoTags;
@property(retain, nonatomic) WBComposeGifAttachment *selectedGifAttachment; // @synthesize selectedGifAttachment=_selectedGifAttachment;
@property(retain, nonatomic) WBALAssetPickerContextManager *picerManager; // @synthesize picerManager=_picerManager;
@property(nonatomic) _Bool allowsVipSubscribe; // @synthesize allowsVipSubscribe=_allowsVipSubscribe;
@property(retain, nonatomic) NSString *getStickerIDs; // @synthesize getStickerIDs=_getStickerIDs;
@property(nonatomic) _Bool isShowBarSticker; // @synthesize isShowBarSticker=_isShowBarSticker;
@property(nonatomic) _Bool isVipSticker; // @synthesize isVipSticker=_isVipSticker;
@property(nonatomic) _Bool isKeepInitialFilterOrStickerOnce; // @synthesize isKeepInitialFilterOrStickerOnce=_isKeepInitialFilterOrStickerOnce;
@property(nonatomic) _Bool isSingleSelectOnce; // @synthesize isSingleSelectOnce=_isSingleSelectOnce;
@property(nonatomic) _Bool isHidenCameraButtonOnce; // @synthesize isHidenCameraButtonOnce=_isHidenCameraButtonOnce;
@property(nonatomic) _Bool isShouldKeepInitialFilterOrSticker; // @synthesize isShouldKeepInitialFilterOrSticker=_isShouldKeepInitialFilterOrSticker;
@property(nonatomic) _Bool isSupportPreviewMultiImageEnterEditView; // @synthesize isSupportPreviewMultiImageEnterEditView=_isSupportPreviewMultiImageEnterEditView;
@property(copy, nonatomic) NSArray *customStickersArray; // @synthesize customStickersArray=_customStickersArray;
@property(nonatomic) _Bool isPanoramaAllowed; // @synthesize isPanoramaAllowed=_isPanoramaAllowed;
@property(nonatomic) _Bool isGifAllowed; // @synthesize isGifAllowed=_isGifAllowed;
@property(nonatomic) _Bool isLivePhotoAllowed; // @synthesize isLivePhotoAllowed=_isLivePhotoAllowed;
@property(nonatomic) _Bool showAddMoreAlways; // @synthesize showAddMoreAlways=_showAddMoreAlways;
@property(nonatomic) unsigned long long maxAllowSelectCount; // @synthesize maxAllowSelectCount=_maxAllowSelectCount;
@property(retain, nonatomic) NSString *initialSourceUICode; // @synthesize initialSourceUICode=_initialSourceUICode;
@property(retain, nonatomic) NSString *initialSelectedStickerID; // @synthesize initialSelectedStickerID=_initialSelectedStickerID;
@property(retain, nonatomic) NSString *initialSelectedFilterID; // @synthesize initialSelectedFilterID=_initialSelectedFilterID;
@property(nonatomic) unsigned long long initialSelectCount; // @synthesize initialSelectCount=_initialSelectCount;
@property(nonatomic) _Bool needOverlay; // @synthesize needOverlay=_needOverlay;
@property(nonatomic) _Bool canEditVideos; // @synthesize canEditVideos=_canEditVideos;
@property(nonatomic) _Bool canEditImages; // @synthesize canEditImages=_canEditImages;
@property(nonatomic) _Bool hasImageLocation; // @synthesize hasImageLocation=_hasImageLocation;
@property(nonatomic) _Bool videoNeedResend; // @synthesize videoNeedResend=_videoNeedResend;
@property(nonatomic) _Bool needResend; // @synthesize needResend=_needResend;
@property(nonatomic) _Bool uploadUsingHighQuality; // @synthesize uploadUsingHighQuality=_uploadUsingHighQuality;
@property(nonatomic) int limitPickerType; // @synthesize limitPickerType=_limitPickerType;
@property(nonatomic) long long mediaPickType; // @synthesize mediaPickType=_mediaPickType;
@property(nonatomic) struct CLLocationCoordinate2D currentImageCoordinate; // @synthesize currentImageCoordinate=_currentImageCoordinate;
@property(retain, nonatomic) WBImageEditorCacheManager *imageCacheManager; // @synthesize imageCacheManager=_imageCacheManager;
- (void).cxx_destruct;
- (void)videoTagViewControllerDidCancelPickVideoTags;
- (void)videoTagVideControllerDidFinishPickVideoTags:(id)arg1;
- (void)openVideoTagViewControllerForVideoCache:(id)arg1;
- (id)currentVideoCache;
- (void)imageCacheManager:(id)arg1 didFinishUpdateWithCacheNeedResend:(id)arg2;
- (void)imageEditor:(id)arg1 didCancelEditingwithCaches:(id)arg2;
- (void)imageEditor:(id)arg1 didFinishEditingWithCaches:(id)arg2;
- (void)videoCropController:(id)arg1 cancelWithVideoCache:(id)arg2;
- (void)videoCropController:(id)arg1 finishWithithVideoCache:(id)arg2;
- (void)videoEditorDidClickBackButton:(id)arg1;
- (void)videoEditor:(id)arg1 exportVideoFailed:(id)arg2;
- (void)videoEditor:(id)arg1 exportVideoSuccess:(id)arg2;
- (void)mPTWBVideoEditor:(id)arg1 clickedFanHui:(id)arg2;
- (void)mPTWBVideoEditor:(id)arg1 daoChuShiBai:(id)arg2;
- (void)mPTWBVideoEditor:(id)arg1 daoChuWanCheng:(id)arg2;
- (void)videoEditor:(id)arg1 needEditCache:(id)arg2;
- (void)videoEditor:(id)arg1 deleteCache:(id)arg2;
- (void)videoEditor:(id)arg1 didCancelEditingWithResultVideoCache:(id)arg2;
- (void)videoEditor:(id)arg1 didFinishEditingWithResultVideoCache:(id)arg2;
- (void)needRefreshDataOrder;
- (void)didPressedMoreButton;
- (_Bool)shouldShowMoreButton;
- (void)composeAttachmentListView:(id)arg1 didPressAttachmentAtIndex:(long long)arg2;
- (_Bool)isLocationEnabled;
- (id)insertPHAsset:(id)arg1;
- (void)addVideoWithCacheURL:(id)arg1;
- (void)WBALAssetPickerContextManager:(id)arg1 finishedPickImageAttachments:(id)arg2;
- (void)WBALAssetPickerContextManagerCanceled:(id)arg1;
- (void)storeCachedAttachment;
- (void)composeJobDidComfirmSend:(id)arg1;
- (void)presendWithJob:(id)arg1;
- (_Bool)isFunnyPicOnly;
- (void)checkTopicsAndDefaultText:(id)arg1;
- (void)imageAttachmentPressedAtIndex:(long long)arg1;
- (void)recoverCachesAsynchronous:(id)arg1;
- (void)refreshView:(_Bool)arg1;
@property(retain, nonatomic) WBComposeImagesElementView *elementView;
- (void)setSelectedGifAttachment:(id)arg1 orSelectedGif:(id)arg2;
- (void)updateView;
- (_Bool)checkCanAddImage:(unsigned long long)arg1;
- (void)setImageCacheInfos:(id)arg1;
- (void)replaceImageWithInfo:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)replaceImage:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)removeAllImageAndVideos;
- (void)removeAllImageToAddNewImage:(id)arg1 cameraParames:(id)arg2;
- (void)addImage:(id)arg1 parames:(id)arg2;
- (void)addImage:(id)arg1 withCameraParames:(id)arg2;
- (void)addImage:(id)arg1 fromSDK:(_Bool)arg2 asDefault:(_Bool)arg3 withPid:(id)arg4 createType:(long long)arg5;
- (void)addImage:(id)arg1 fromSDK:(_Bool)arg2 asDefault:(_Bool)arg3;
- (void)addImage:(id)arg1 withPid:(id)arg2 createType:(long long)arg3;
- (void)addImage:(id)arg1 fromSDK:(_Bool)arg2;
- (void)addImage:(id)arg1 Default:(_Bool)arg2;
- (void)addImage:(id)arg1;
- (void)addVideoAsset:(id)arg1 fromSDK:(_Bool)arg2;
- (void)addImageAssetArray:(id)arg1 fromSDK:(_Bool)arg2;
- (id)imageAssets;
- (id)images;
- (id)mediaCaches;
- (id)videos;
- (void)takeVideo;
- (void)pickVideo;
- (void)takePhoto;
- (void)pickImage;
- (unsigned long long)characterCount;
- (_Bool)recoverContentFromDraft;
- (_Bool)contentHasChangedFromDraft;
- (_Bool)contenthasChangedFromDefault;
- (_Bool)hasContent;
- (void)setTagEditable:(_Bool)arg1;
- (_Bool)isInEditComposer;
- (void)viewDidLoad;
- (_Bool)notifiImageLocation;
- (void)setDelegate:(id)arg1;
- (void)setupWithJob:(id)arg1;
- (void)saveComposeDataToJob:(id)arg1;
- (void)saveVcontentToJob:(id)arg1;
- (unsigned long long)elementVcontentType;
- (void)saveGifComposeDataToJob:(id)arg1;
- (void)pickData;
- (id)defaultMap;
- (_Bool)isPickingData;
- (_Bool)canPickData;
@property(readonly, nonatomic) WBComposeImagesElementView *imagesElementView;
- (Class)viewClass;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(retain, nonatomic) NSNumber *guideSource;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

