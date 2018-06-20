//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSObject<OS_dispatch_source>, NSURL, WBSFaviconResponse, WBSTemplateIconResponse, WBSTouchIconResponse;

__attribute__((visibility("hidden")))
@interface FavoritesPickerImageResponseState : NSObject
{
    BOOL _atLeastOneResponseServed;
    long long _deferredUpdateImageSource;
    NSObject<OS_dispatch_source> *_deferredUpdateDispatchSource;
    id _faviconRequestToken;
    id _touchIconRequestToken;
    id _templateIconRequestToken;
    WBSFaviconResponse *_faviconResponse;
    WBSTouchIconResponse *_touchIconResponse;
    WBSTemplateIconResponse *_templateIconResponse;
    NSURL *_originalRequestURL;
}

@property(retain, nonatomic) NSURL *originalRequestURL; // @synthesize originalRequestURL=_originalRequestURL;
@property(retain, nonatomic) WBSTemplateIconResponse *templateIconResponse; // @synthesize templateIconResponse=_templateIconResponse;
@property(retain, nonatomic) WBSTouchIconResponse *touchIconResponse; // @synthesize touchIconResponse=_touchIconResponse;
@property(retain, nonatomic) WBSFaviconResponse *faviconResponse; // @synthesize faviconResponse=_faviconResponse;
@property(retain, nonatomic) id templateIconRequestToken; // @synthesize templateIconRequestToken=_templateIconRequestToken;
@property(retain, nonatomic) id touchIconRequestToken; // @synthesize touchIconRequestToken=_touchIconRequestToken;
@property(retain, nonatomic) id faviconRequestToken; // @synthesize faviconRequestToken=_faviconRequestToken;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *deferredUpdateDispatchSource; // @synthesize deferredUpdateDispatchSource=_deferredUpdateDispatchSource;
@property(nonatomic) long long deferredUpdateImageSource; // @synthesize deferredUpdateImageSource=_deferredUpdateImageSource;
@property(nonatomic) BOOL atLeastOneResponseServed; // @synthesize atLeastOneResponseServed=_atLeastOneResponseServed;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *allRequestTokens;

@end

