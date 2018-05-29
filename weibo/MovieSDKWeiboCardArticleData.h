//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MovieSDKWeiboCardData.h"

@class MovieSDKImageData, MovieSDKWeiboCardArticleContentData, MovieSDKWeiboCardAuthorData, NSString;

@interface MovieSDKWeiboCardArticleData : MovieSDKWeiboCardData
{
    MovieSDKImageData *_image;
    MovieSDKWeiboCardArticleContentData *_content;
    MovieSDKWeiboCardAuthorData *_author;
    NSString *_read_count;
}

@property(retain, nonatomic) NSString *read_count; // @synthesize read_count=_read_count;
@property(retain, nonatomic) MovieSDKWeiboCardAuthorData *author; // @synthesize author=_author;
@property(retain, nonatomic) MovieSDKWeiboCardArticleContentData *content; // @synthesize content=_content;
@property(retain, nonatomic) MovieSDKImageData *image; // @synthesize image=_image;
- (void).cxx_destruct;
- (id)getDisplayNum:(id)arg1;
- (_Bool)parser:(id)arg1;

@end

