//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MovieSDKDataBaseObject.h"

@class NSNumber, NSString;

@interface WBMovieGuideModel : MovieSDKDataBaseObject
{
    NSString *_title;
    NSString *_desc;
    NSString *_pic;
    NSString *_object_id;
    NSString *_url;
    NSString *_scheme;
    NSNumber *_user_score;
}

@property(retain, nonatomic) NSNumber *user_score; // @synthesize user_score=_user_score;
@property(retain, nonatomic) NSString *scheme; // @synthesize scheme=_scheme;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
@property(retain, nonatomic) NSString *object_id; // @synthesize object_id=_object_id;
@property(retain, nonatomic) NSString *pic; // @synthesize pic=_pic;
@property(retain, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (_Bool)parser:(id)arg1;

@end

