//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSNumber, NSString;

@interface CKContextRequest : NSObject <NSSecureCoding>
{
    BOOL _textIsRaw;
    BOOL _includeHigherLevelTopics;
    BOOL _prepareOnly;
    BOOL _debug;
    BOOL _dontSkip;
    BOOL _timing;
    unsigned int _topk;
    NSString *_text;
    NSString *_title;
    NSString *_contentDescription;
    NSString *_contentKeywords;
    NSString *_contentAuthor;
    NSString *_url;
    NSString *_languageTag;
    NSNumber *_overrideBlendAlpha;
    NSNumber *_overrideBlendBeta;
    NSNumber *_overrideBlendGamma;
    unsigned long long _type;
}

+ (void)logTransactionSuccessfulForResponseId:(id)arg1 inputLength:(unsigned long long)arg2 completionLength:(unsigned long long)arg3 requestType:(unsigned long long)arg4 logType:(unsigned long long)arg5;
+ (void)logEngagementForResponseId:(id)arg1 result:(id)arg2 rank:(unsigned long long)arg3 inputLength:(unsigned long long)arg4 completionLength:(unsigned long long)arg5 requestType:(unsigned long long)arg6 logType:(unsigned long long)arg7;
+ (void)logResultsShownForResponseId:(id)arg1 shown:(unsigned long long)arg2 couldHaveShown:(unsigned long long)arg3 serverOverride:(BOOL)arg4 inputLength:(unsigned long long)arg5 requestType:(unsigned long long)arg6 logType:(unsigned long long)arg7;
+ (BOOL)shutdownService;
+ (BOOL)pingService;
+ (id)requestWithText:(id)arg1;
+ (id)trimTextToSize:(id)arg1;
+ (BOOL)supportsSecureCoding;
+ (id)_newXpcConnection;
+ (id)_xpcConnection;
+ (void)portraitBlacklistWithReply:(CDUnknownBlockType)arg1;
+ (void)statusWithReply:(CDUnknownBlockType)arg1;
+ (void)findResponseByID:(id)arg1 withReply:(CDUnknownBlockType)arg2;
+ (void)prepareRequestForText:(id)arg1 withReply:(CDUnknownBlockType)arg2;
+ (void)warmUpForRequestType:(unsigned long long)arg1 withReply:(CDUnknownBlockType)arg2;
+ (void)runOffMainThread:(CDUnknownBlockType)arg1;
+ (void)findResultsForText:(id)arg1 languageTag:(id)arg2 requestType:(unsigned long long)arg3 withReply:(CDUnknownBlockType)arg4;
+ (void)findResultsForText:(id)arg1 languageTag:(id)arg2 withReply:(CDUnknownBlockType)arg3;
+ (void)findResultsForText:(id)arg1 withReply:(CDUnknownBlockType)arg2;
+ (void)setDefaultRequestType:(unsigned long long)arg1;
+ (void)initialize;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(nonatomic) unsigned int topk; // @synthesize topk=_topk;
@property(retain, nonatomic) NSNumber *overrideBlendGamma; // @synthesize overrideBlendGamma=_overrideBlendGamma;
@property(retain, nonatomic) NSNumber *overrideBlendBeta; // @synthesize overrideBlendBeta=_overrideBlendBeta;
@property(retain, nonatomic) NSNumber *overrideBlendAlpha; // @synthesize overrideBlendAlpha=_overrideBlendAlpha;
@property(nonatomic) BOOL timing; // @synthesize timing=_timing;
@property(nonatomic) BOOL dontSkip; // @synthesize dontSkip=_dontSkip;
@property(nonatomic) BOOL debug; // @synthesize debug=_debug;
@property(nonatomic) BOOL prepareOnly; // @synthesize prepareOnly=_prepareOnly;
@property(nonatomic) BOOL includeHigherLevelTopics; // @synthesize includeHigherLevelTopics=_includeHigherLevelTopics;
@property(retain, nonatomic) NSString *languageTag; // @synthesize languageTag=_languageTag;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
@property(retain, nonatomic, setter=setContentAuthor:) NSString *contentAuthor; // @synthesize contentAuthor=_contentAuthor;
@property(retain, nonatomic, setter=setContentKeywords:) NSString *contentKeywords; // @synthesize contentKeywords=_contentKeywords;
@property(retain, nonatomic, setter=setContentDescription:) NSString *contentDescription; // @synthesize contentDescription=_contentDescription;
@property(retain, nonatomic, setter=setTitle:) NSString *title; // @synthesize title=_title;
@property(nonatomic) BOOL textIsRaw; // @synthesize textIsRaw=_textIsRaw;
@property(retain, nonatomic, setter=setText:) NSString *text; // @synthesize text=_text;
- (void).cxx_destruct;
- (void)_executeWithReply:(CDUnknownBlockType)arg1;
- (void)_postProcessResponse:(id)arg1;
- (id)execute;
- (void)executeWithReply:(CDUnknownBlockType)arg1;
- (id)initForClient:(id)arg1;
- (id)initWithText:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)capabilitiesWithReply:(CDUnknownBlockType)arg1;

@end

