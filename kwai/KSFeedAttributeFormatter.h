//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class KSFeedAttributeConfiguration, KS_feed, NSMutableAttributedString;

@interface KSFeedAttributeFormatter : NSObject
{
    KS_feed *_feed;
    KSFeedAttributeConfiguration *_configuration;
    NSMutableAttributedString *_attributedCaption;
    NSMutableAttributedString *_slideAttributedCaption;
    NSMutableAttributedString *_attributedComments;
    NSMutableAttributedString *_attributedLikeCount;
    NSMutableAttributedString *_attributedPoi;
    NSMutableAttributedString *_attributedMusicTag;
    NSMutableAttributedString *_attributedMagicFaces;
    CDUnknownBlockType _magicFaceClickAction;
    NSMutableAttributedString *_attributedMerchant;
    CDUnknownBlockType _merchantClickAction;
    struct CGSize _captionSize;
    struct CGSize _commentsSize;
    struct CGSize _likeSize;
    struct CGSize _poiSize;
    struct CGSize _musicTagSize;
    struct CGSize _magicFacesSize;
    struct CGSize _merchantSize;
}

+ (id)likerNameString:(id)arg1 feed:(id)arg2 configuration:(id)arg3;
+ (id)likeCountAttributedStringWithFeed:(id)arg1 configuration:(id)arg2;
+ (id)obtainCommentAttributedStringByFeed:(id)arg1 configuration:(id)arg2;
+ (id)userAndSayWithUserId:(id)arg1 userName:(id)arg2 say:(id)arg3 header:(id)arg4 sex:(id)arg5 recoSource:(id)arg6 recoPhotoId:(id)arg7 recoAuthorId:(id)arg8 exptag:(id)arg9 configuration:(id)arg10;
+ (id)captionAttributedString:(id)arg1 tagType:(_Bool)arg2 configuration:(id)arg3;
+ (id)formatterWithFeed:(id)arg1 configuration:(id)arg2;
@property(copy, nonatomic) CDUnknownBlockType merchantClickAction; // @synthesize merchantClickAction=_merchantClickAction;
@property(nonatomic) struct CGSize merchantSize; // @synthesize merchantSize=_merchantSize;
@property(retain, nonatomic) NSMutableAttributedString *attributedMerchant; // @synthesize attributedMerchant=_attributedMerchant;
@property(copy, nonatomic) CDUnknownBlockType magicFaceClickAction; // @synthesize magicFaceClickAction=_magicFaceClickAction;
@property(nonatomic) struct CGSize magicFacesSize; // @synthesize magicFacesSize=_magicFacesSize;
@property(retain, nonatomic) NSMutableAttributedString *attributedMagicFaces; // @synthesize attributedMagicFaces=_attributedMagicFaces;
@property(nonatomic) struct CGSize musicTagSize; // @synthesize musicTagSize=_musicTagSize;
@property(retain, nonatomic) NSMutableAttributedString *attributedMusicTag; // @synthesize attributedMusicTag=_attributedMusicTag;
@property(nonatomic) struct CGSize poiSize; // @synthesize poiSize=_poiSize;
@property(retain, nonatomic) NSMutableAttributedString *attributedPoi; // @synthesize attributedPoi=_attributedPoi;
@property(nonatomic) struct CGSize likeSize; // @synthesize likeSize=_likeSize;
@property(retain, nonatomic) NSMutableAttributedString *attributedLikeCount; // @synthesize attributedLikeCount=_attributedLikeCount;
@property(nonatomic) struct CGSize commentsSize; // @synthesize commentsSize=_commentsSize;
@property(retain, nonatomic) NSMutableAttributedString *attributedComments; // @synthesize attributedComments=_attributedComments;
@property(nonatomic) struct CGSize captionSize; // @synthesize captionSize=_captionSize;
@property(retain, nonatomic) NSMutableAttributedString *slideAttributedCaption; // @synthesize slideAttributedCaption=_slideAttributedCaption;
@property(retain, nonatomic) NSMutableAttributedString *attributedCaption; // @synthesize attributedCaption=_attributedCaption;
@property(readonly, nonatomic) KSFeedAttributeConfiguration *configuration; // @synthesize configuration=_configuration;
@property(readonly, nonatomic) __weak KS_feed *feed; // @synthesize feed=_feed;
- (void).cxx_destruct;
- (void)processLinksInCaption;
- (id)getLines:(id)arg1 width:(double)arg2;
- (id)initWithFeed:(id)arg1 configuration:(id)arg2;

@end
