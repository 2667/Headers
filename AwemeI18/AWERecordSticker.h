//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEBaseApiModel.h"

@class AWEURLModel, NSNumber, NSString;

@interface AWERecordSticker : AWEBaseApiModel
{
    NSNumber *_stickerID;
    AWEURLModel *_iconURL;
    AWEURLModel *_resourceURL;
    NSString *_name;
    NSString *_hint;
    long long _type;
    NSNumber *_musicID;
    unsigned long long _usageScenario;
}

+ (id)ARStickerNameArray;
+ (id)ARStickers;
+ (id)resourceURLJSONTransformer;
+ (id)iconURLJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@property(nonatomic) unsigned long long usageScenario; // @synthesize usageScenario=_usageScenario;
@property(retain, nonatomic) NSNumber *musicID; // @synthesize musicID=_musicID;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *hint; // @synthesize hint=_hint;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) AWEURLModel *resourceURL; // @synthesize resourceURL=_resourceURL;
@property(copy, nonatomic) AWEURLModel *iconURL; // @synthesize iconURL=_iconURL;
@property(retain, nonatomic) NSNumber *stickerID; // @synthesize stickerID=_stickerID;
- (void).cxx_destruct;
- (_Bool)stickerResourceForItemExist;

@end

