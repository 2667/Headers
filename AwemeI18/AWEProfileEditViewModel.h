//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSDate, NSString, UIImage;

@interface AWEProfileEditViewModel : NSObject
{
    _Bool _ifDefaultID;
    _Bool _isBindedWeibo;
    UIImage *_avatarImage;
    NSArray *_avatarURL;
    UIImage *_videoIconImage;
    NSArray *_videoIconURL;
    NSArray *_videoMp4IconURL;
    NSString *_nickname;
    NSString *_uniqueID;
    NSDate *_uniqueIdModifyTime;
    NSString *_gender;
    NSString *_birthDate;
    NSString *_signature;
    NSString *_avatarURI;
    NSString *_videoIconURI;
    long long _genderType;
    NSString *_weiboName;
    NSString *_weiboSchema;
    NSString *_weiboURL;
    NSString *_schoolName;
    NSString *_schoolPoiId;
    NSString *_insId;
    NSString *_youtubeChannelTitle;
    NSString *_youtubeChannelId;
    NSString *_googleAccount;
}

@property(copy, nonatomic) NSString *googleAccount; // @synthesize googleAccount=_googleAccount;
@property(copy, nonatomic) NSString *youtubeChannelId; // @synthesize youtubeChannelId=_youtubeChannelId;
@property(copy, nonatomic) NSString *youtubeChannelTitle; // @synthesize youtubeChannelTitle=_youtubeChannelTitle;
@property(copy, nonatomic) NSString *insId; // @synthesize insId=_insId;
@property(copy, nonatomic) NSString *schoolPoiId; // @synthesize schoolPoiId=_schoolPoiId;
@property(copy, nonatomic) NSString *schoolName; // @synthesize schoolName=_schoolName;
@property(copy, nonatomic) NSString *weiboURL; // @synthesize weiboURL=_weiboURL;
@property(copy, nonatomic) NSString *weiboSchema; // @synthesize weiboSchema=_weiboSchema;
@property(copy, nonatomic) NSString *weiboName; // @synthesize weiboName=_weiboName;
@property(nonatomic) _Bool isBindedWeibo; // @synthesize isBindedWeibo=_isBindedWeibo;
@property(nonatomic) _Bool ifDefaultID; // @synthesize ifDefaultID=_ifDefaultID;
@property(nonatomic) long long genderType; // @synthesize genderType=_genderType;
@property(retain, nonatomic) NSString *videoIconURI; // @synthesize videoIconURI=_videoIconURI;
@property(retain, nonatomic) NSString *avatarURI; // @synthesize avatarURI=_avatarURI;
@property(retain, nonatomic) NSString *signature; // @synthesize signature=_signature;
@property(retain, nonatomic) NSString *birthDate; // @synthesize birthDate=_birthDate;
@property(retain, nonatomic) NSString *gender; // @synthesize gender=_gender;
@property(retain, nonatomic) NSDate *uniqueIdModifyTime; // @synthesize uniqueIdModifyTime=_uniqueIdModifyTime;
@property(retain, nonatomic) NSString *uniqueID; // @synthesize uniqueID=_uniqueID;
@property(retain, nonatomic) NSString *nickname; // @synthesize nickname=_nickname;
@property(retain, nonatomic) NSArray *videoMp4IconURL; // @synthesize videoMp4IconURL=_videoMp4IconURL;
@property(retain, nonatomic) NSArray *videoIconURL; // @synthesize videoIconURL=_videoIconURL;
@property(retain, nonatomic) UIImage *videoIconImage; // @synthesize videoIconImage=_videoIconImage;
@property(retain, nonatomic) NSArray *avatarURL; // @synthesize avatarURL=_avatarURL;
@property(retain, nonatomic) UIImage *avatarImage; // @synthesize avatarImage=_avatarImage;
- (void).cxx_destruct;
- (void)refreshWithUser:(id)arg1;

@end

