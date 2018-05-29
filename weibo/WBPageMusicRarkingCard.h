//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBPageCard.h"

@class NSString, WBMusicItem, WBVideoItem;

@interface WBPageMusicRarkingCard : WBPageCard
{
    NSString *_pic;
    NSString *_desc1;
    NSString *_desc2;
    NSString *_desc3;
    NSString *_mediaType;
    NSString *_mediaCategory;
    NSString *_object_id;
    WBMusicItem *_musicItem;
    WBVideoItem *_videoItem;
}

+ (Class)fangleTableCellClass;
+ (Class)viewClass;
+ (Class)tableViewCellClass;
@property(retain, nonatomic) WBVideoItem *videoItem; // @synthesize videoItem=_videoItem;
@property(retain, nonatomic) WBMusicItem *musicItem; // @synthesize musicItem=_musicItem;
@property(retain, nonatomic) NSString *object_id; // @synthesize object_id=_object_id;
@property(retain, nonatomic) NSString *mediaCategory; // @synthesize mediaCategory=_mediaCategory;
@property(retain, nonatomic) NSString *mediaType; // @synthesize mediaType=_mediaType;
@property(retain, nonatomic) NSString *desc3; // @synthesize desc3=_desc3;
@property(retain, nonatomic) NSString *desc2; // @synthesize desc2=_desc2;
@property(retain, nonatomic) NSString *desc1; // @synthesize desc1=_desc1;
@property(retain, nonatomic) NSString *pic; // @synthesize pic=_pic;
- (void).cxx_destruct;
- (_Bool)updateWithDictionary:(id)arg1;

@end

