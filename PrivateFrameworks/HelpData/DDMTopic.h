//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <HelpData/DDMObject.h>

@class DDMBook, DDMMeta, NSArray, NSDictionary, NSNumber, NSString;

@interface DDMTopic : DDMObject
{
    BOOL _allResourcesCached;
    NSString *_tocID;
    NSString *_title;
    NSString *_locale;
    NSString *_content;
    DDMMeta *_meta;
    NSArray *_articles;
    NSString *_bookID;
    NSDictionary *_bookInfo;
    NSNumber *_count;
    NSString *_topicID;
    NSString *_searchTitle;
    NSString *_bodyString;
}

+ (id)ddmObjectIdentifierWithBookID:(id)arg1 topicID:(id)arg2;
@property BOOL allResourcesCached; // @synthesize allResourcesCached=_allResourcesCached;
@property(readonly) NSString *bodyString; // @synthesize bodyString=_bodyString;
@property(readonly) NSString *searchTitle; // @synthesize searchTitle=_searchTitle;
@property(readonly) NSString *topicID; // @synthesize topicID=_topicID;
@property(readonly) NSNumber *count; // @synthesize count=_count;
@property(readonly) NSDictionary *bookInfo; // @synthesize bookInfo=_bookInfo;
@property(readonly) NSString *bookID; // @synthesize bookID=_bookID;
@property(readonly) NSArray *articles; // @synthesize articles=_articles;
@property(readonly) DDMMeta *meta; // @synthesize meta=_meta;
@property(readonly) NSString *content; // @synthesize content=_content;
@property(readonly) NSString *locale; // @synthesize locale=_locale;
@property(readonly) NSString *title; // @synthesize title=_title;
@property(readonly) NSString *tocID; // @synthesize tocID=_tocID;
- (void).cxx_destruct;
- (id)ddmObjectIdentifier;
- (id)description;
@property(readonly) DDMBook *ddmBook;
@property(readonly) NSString *htmlTopic;

@end

