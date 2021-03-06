//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class BootImagePopOperation, TBBootImageBrandInfo, TBBootImageInfoItem, UIImage, UIImageView;

@interface TBBootImageManager : NSObject
{
    _Bool _isOrientationIsLandscape;
    long long _bootImageStatus;
    UIImageView *_backgroundImageView;
    TBBootImageInfoItem *_curBootImageItemData;
    TBBootImageBrandInfo *_curBrandInfo;
    UIImage *_curBootImage;
    BootImagePopOperation *_bootImagePopOperation;
    double _enterBackgroundTime;
}

+ (id)sharedInstance;
+ (void)cleanAllBootImageData;
+ (_Bool)isBootImageShowing;
+ (void)loadBootImageInfo;
+ (_Bool)showBootImageViewAtHotStart;
+ (void)showBootImageViewAtColdStart:(id)arg1;
+ (void)readyBootImageView;
@property(nonatomic) _Bool isOrientationIsLandscape; // @synthesize isOrientationIsLandscape=_isOrientationIsLandscape;
@property(nonatomic) double enterBackgroundTime; // @synthesize enterBackgroundTime=_enterBackgroundTime;
@property(retain, nonatomic) BootImagePopOperation *bootImagePopOperation; // @synthesize bootImagePopOperation=_bootImagePopOperation;
@property(retain, nonatomic) UIImage *curBootImage; // @synthesize curBootImage=_curBootImage;
@property(copy, nonatomic) TBBootImageBrandInfo *curBrandInfo; // @synthesize curBrandInfo=_curBrandInfo;
@property(retain, nonatomic) TBBootImageInfoItem *curBootImageItemData; // @synthesize curBootImageItemData=_curBootImageItemData;
@property(retain, nonatomic) UIImageView *backgroundImageView; // @synthesize backgroundImageView=_backgroundImageView;
@property(nonatomic) long long bootImageStatus; // @synthesize bootImageStatus=_bootImageStatus;
- (void).cxx_destruct;
- (void)handleOrientationChange;
- (void)handleEnterBackground;
- (void)onReceiveMemoryWarning;
- (id)computeLaunchImageName;
- (_Bool)showCurrentItem:(_Bool)arg1 configuration:(id)arg2;
- (_Bool)showBootImageAtHotStart;
- (void)showBootImageAtColdStart:(id)arg1;
- (void)initHotstartManager;
- (void)readyBootImageViewAtColdStart;
- (id)init;
- (void)dealloc;

@end

