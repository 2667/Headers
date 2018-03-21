//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "Mobike_Model.h"

#import "NSCoding-Protocol.h"

@class NSArray, NSString, UIImageView;

@interface MBKPowerBankBike : Mobike_Model <NSCoding>
{
    NSString *_normalIcon;
    NSString *_selectIcon;
    UIImageView *_iconNormalView;
    UIImageView *_iconSelectView;
    NSString *_bannerIcon;
    NSString *_bannerTitle;
    NSString *_bannerUrl;
    NSString *_powerBnakReturnWebUrl;
    NSArray *_cityCodes;
}

@property(retain, nonatomic) NSArray *cityCodes; // @synthesize cityCodes=_cityCodes;
@property(retain) NSString *powerBnakReturnWebUrl; // @synthesize powerBnakReturnWebUrl=_powerBnakReturnWebUrl;
@property(retain) NSString *bannerUrl; // @synthesize bannerUrl=_bannerUrl;
@property(retain) NSString *bannerTitle; // @synthesize bannerTitle=_bannerTitle;
@property(retain) NSString *bannerIcon; // @synthesize bannerIcon=_bannerIcon;
@property(retain) UIImageView *iconSelectView; // @synthesize iconSelectView=_iconSelectView;
@property(retain) UIImageView *iconNormalView; // @synthesize iconNormalView=_iconNormalView;
@property(retain) NSString *selectIcon; // @synthesize selectIcon=_selectIcon;
@property(retain) NSString *normalIcon; // @synthesize normalIcon=_normalIcon;
- (void).cxx_destruct;
- (void)loadImageWithUrl:(id)arg1;
- (void)downloadImages;
- (id)initWithInfo:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end
