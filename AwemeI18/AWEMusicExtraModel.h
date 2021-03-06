//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEBaseApiModel.h"

@class NSNumber, NSString;

@interface AWEMusicExtraModel : AWEBaseApiModel
{
    _Bool _hasEdited;
    NSString *_title;
    NSNumber *_albumId;
    NSString *_album;
    NSString *_albumTitle;
    NSNumber *_songId;
    NSString *_allRate;
    NSString *_author;
    NSString *_picSmall;
    NSString *_picPremium;
    NSString *_picBig;
    NSString *_picHuge;
    NSNumber *_appleMusicID;
}

+ (id)JSONKeyPathsByPropertyKey;
@property(retain, nonatomic) NSNumber *appleMusicID; // @synthesize appleMusicID=_appleMusicID;
@property(nonatomic) _Bool hasEdited; // @synthesize hasEdited=_hasEdited;
@property(copy, nonatomic) NSString *picHuge; // @synthesize picHuge=_picHuge;
@property(copy, nonatomic) NSString *picBig; // @synthesize picBig=_picBig;
@property(copy, nonatomic) NSString *picPremium; // @synthesize picPremium=_picPremium;
@property(copy, nonatomic) NSString *picSmall; // @synthesize picSmall=_picSmall;
@property(copy, nonatomic) NSString *author; // @synthesize author=_author;
@property(copy, nonatomic) NSString *allRate; // @synthesize allRate=_allRate;
@property(retain, nonatomic) NSNumber *songId; // @synthesize songId=_songId;
@property(copy, nonatomic) NSString *albumTitle; // @synthesize albumTitle=_albumTitle;
@property(copy, nonatomic) NSString *album; // @synthesize album=_album;
@property(retain, nonatomic) NSNumber *albumId; // @synthesize albumId=_albumId;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;

@end

