//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary, NSString;

@interface CSTemplateBuilderModel : NSObject
{
    int _rangeType;
    NSDictionary *_map;
    NSString *_type;
    NSString *_clientId;
    NSString *_content;
    NSArray *_mediaList;
    NSString *_linkIcon;
    NSString *_linkTitle;
    NSString *_linkDesc;
    NSString *_linkUrl;
    NSArray *_metionList;
    NSString *_fristMetionName;
    NSString *_userSceneName;
    NSString *_poiLink;
    NSString *_locName;
    NSString *_country;
    NSString *_appId;
    NSString *_appName;
    NSString *_appIcon;
    NSString *_elShareScheme;
}

+ (id)getBuilderModelWithMap:(id)arg1 clientId:(id)arg2;
@property(retain, nonatomic) NSString *elShareScheme; // @synthesize elShareScheme=_elShareScheme;
@property(retain, nonatomic) NSString *appIcon; // @synthesize appIcon=_appIcon;
@property(retain, nonatomic) NSString *appName; // @synthesize appName=_appName;
@property(retain, nonatomic) NSString *appId; // @synthesize appId=_appId;
@property(nonatomic) int rangeType; // @synthesize rangeType=_rangeType;
@property(retain, nonatomic) NSString *country; // @synthesize country=_country;
@property(retain, nonatomic) NSString *locName; // @synthesize locName=_locName;
@property(retain, nonatomic) NSString *poiLink; // @synthesize poiLink=_poiLink;
@property(copy, nonatomic) NSString *userSceneName; // @synthesize userSceneName=_userSceneName;
@property(retain, nonatomic) NSString *fristMetionName; // @synthesize fristMetionName=_fristMetionName;
@property(retain, nonatomic) NSArray *metionList; // @synthesize metionList=_metionList;
@property(retain, nonatomic) NSString *linkUrl; // @synthesize linkUrl=_linkUrl;
@property(retain, nonatomic) NSString *linkDesc; // @synthesize linkDesc=_linkDesc;
@property(retain, nonatomic) NSString *linkTitle; // @synthesize linkTitle=_linkTitle;
@property(retain, nonatomic) NSString *linkIcon; // @synthesize linkIcon=_linkIcon;
@property(retain, nonatomic) NSArray *mediaList; // @synthesize mediaList=_mediaList;
@property(retain, nonatomic) NSString *content; // @synthesize content=_content;
@property(retain, nonatomic) NSString *clientId; // @synthesize clientId=_clientId;
@property(retain, nonatomic) NSString *type; // @synthesize type=_type;
@property(retain, nonatomic) NSDictionary *map; // @synthesize map=_map;
- (void).cxx_destruct;

@end

