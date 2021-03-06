//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QQSMItemElementBaseView.h>

#import <QQMainProject/QQChatImageMetaInfoObserver-Protocol.h>

@class NSString, QQChatImageMetaInfo, UIImage, UIImageView;

@interface QQGTTItemElementPictureView : QQSMItemElementBaseView <QQChatImageMetaInfoObserver>
{
    UIImageView *_imageView;
    UIImage *_coverImage;
    QQChatImageMetaInfo *_metaInfo;
    NSString *_coverUrl;
    struct CGSize _maxSize;
}

+ (struct CGSize)getFitImageSize:(id)arg1;
+ (struct CGSize)layoutElements:(id)arg1 withMaxSize:(struct CGSize)arg2;
@property(retain, nonatomic) NSString *coverUrl; // @synthesize coverUrl=_coverUrl;
@property(retain, nonatomic) QQChatImageMetaInfo *metaInfo; // @synthesize metaInfo=_metaInfo;
@property(retain, nonatomic) UIImage *coverImage; // @synthesize coverImage=_coverImage;
@property(nonatomic) struct CGSize maxSize; // @synthesize maxSize=_maxSize;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
- (void)prepareForReuse;
- (id)reuseIdentifier;
- (_Bool)shouldReuse;
- (void)onImageDownloadResult:(id)arg1;
- (void)setQQGTTItemElementBase:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

