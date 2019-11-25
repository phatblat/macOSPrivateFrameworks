//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface SearchUINetPreferences : NSObject
{
    NSString *_buildVersion;
    NSString *_productVersion;
    NSString *_UUID;
    BOOL _serviceDebugging;
    BOOL _isNetworkReachable;
}

+ (void)clearSharedPreferences;
+ (id)sharedPreferences;
- (void).cxx_destruct;
- (id)signedRequestForURL:(id)arg1 parameters:(id)arg2;
- (id)stocksYQLBaseURL;
- (id)serviceDebuggingPath;
- (BOOL)serviceDebugging;
- (id)backsideLogoURL;
- (id)fullQuoteURLOverrideForStock:(id)arg1;
- (id)_urlStringWithHost:(id)arg1;
- (id)UUID;
- (id)financeRequestAttributes;
- (void)addStocksHeadersToPostRequest:(id)arg1;
- (id)_stocksAcceptLanguage;
- (id)stocksLanguageCode;
- (id)stocksCountryCode;
- (id)_stocksUserAgent;
@property(nonatomic, getter=isNetworkReachable) BOOL networkReachable;
- (void)setupLogging;
- (void)resetLocale;
- (id)init;

@end

