//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@interface SPSearchQueryContext : NSObject
{
    BOOL _forceQueryEvenIfSame;
    NSString *_searchString;
    NSArray *_markedTextArray;
    NSString *_keyboardLanguage;
    NSString *_keyboardPrimaryLanguage;
    NSArray *_searchDomains;
    NSArray *_disabledDomains;
    NSArray *_disabledBundles;
    unsigned long long _whyQuery;
    unsigned long long _whyClear;
    unsigned long long _queryIdent;
    unsigned long long _options;
    double _currentTime;
}

+ (id)queryContextWithSearchString:(id)arg1;
@property(nonatomic) double currentTime; // @synthesize currentTime=_currentTime;
@property(nonatomic) unsigned long long options; // @synthesize options=_options;
@property(nonatomic) unsigned long long queryIdent; // @synthesize queryIdent=_queryIdent;
@property(nonatomic) unsigned long long whyClear; // @synthesize whyClear=_whyClear;
@property(nonatomic) unsigned long long whyQuery; // @synthesize whyQuery=_whyQuery;
@property(nonatomic) BOOL forceQueryEvenIfSame; // @synthesize forceQueryEvenIfSame=_forceQueryEvenIfSame;
@property(retain, nonatomic) NSArray *disabledBundles; // @synthesize disabledBundles=_disabledBundles;
@property(retain, nonatomic) NSArray *disabledDomains; // @synthesize disabledDomains=_disabledDomains;
@property(retain, nonatomic) NSArray *searchDomains; // @synthesize searchDomains=_searchDomains;
@property(retain, nonatomic) NSString *keyboardPrimaryLanguage; // @synthesize keyboardPrimaryLanguage=_keyboardPrimaryLanguage;
@property(retain, nonatomic) NSString *keyboardLanguage; // @synthesize keyboardLanguage=_keyboardLanguage;
@property(retain, nonatomic) NSArray *markedTextArray; // @synthesize markedTextArray=_markedTextArray;
@property(retain, nonatomic) NSString *searchString; // @synthesize searchString=_searchString;
- (void).cxx_destruct;
@property(readonly, nonatomic) BOOL hasMarkedText;
- (id)initWithSearchString:(id)arg1;

@end

