//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JSONModel.h"

@class NSArray, NSDictionary, NSString, WBMusicCategoryModel;

@interface WBMusicModel : JSONModel
{
    _Bool _isFullMusic;
    NSArray *_artist_name;
    NSString *_photo;
    NSString *_song_id;
    NSString *_song_name;
    long long _anchor_point;
    double _duration;
    NSString *_play_stream;
    NSString *_downloadUrl;
    NSString *_musicFilePath;
    unsigned long long _status;
    WBMusicCategoryModel *_category;
    long long _anchor_point_edited;
    NSDictionary *_propertyDic;
}

+ (_Bool)propertyIsOptional:(id)arg1;
@property(copy, nonatomic) NSDictionary *propertyDic; // @synthesize propertyDic=_propertyDic;
@property(nonatomic) _Bool isFullMusic; // @synthesize isFullMusic=_isFullMusic;
@property(nonatomic) long long anchor_point_edited; // @synthesize anchor_point_edited=_anchor_point_edited;
@property(copy, nonatomic) WBMusicCategoryModel *category; // @synthesize category=_category;
@property(nonatomic) unsigned long long status; // @synthesize status=_status;
@property(copy, nonatomic) NSString *musicFilePath; // @synthesize musicFilePath=_musicFilePath;
@property(copy, nonatomic) NSString *downloadUrl; // @synthesize downloadUrl=_downloadUrl;
@property(copy, nonatomic) NSString *play_stream; // @synthesize play_stream=_play_stream;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(nonatomic) long long anchor_point; // @synthesize anchor_point=_anchor_point;
@property(copy, nonatomic) NSString *song_name; // @synthesize song_name=_song_name;
@property(copy, nonatomic) NSString *song_id; // @synthesize song_id=_song_id;
@property(copy, nonatomic) NSString *photo; // @synthesize photo=_photo;
@property(copy, nonatomic) NSArray *artist_name; // @synthesize artist_name=_artist_name;
- (void).cxx_destruct;

@end

