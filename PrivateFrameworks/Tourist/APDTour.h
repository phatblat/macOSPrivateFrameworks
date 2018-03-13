//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDate, NSString, NSURL;

@interface APDTour : NSObject
{
    BOOL _isWaxwingTour;
    NSURL *_url;
    NSURL *_assetURL;
    unsigned long long _type;
    NSArray *_boardIDs;
    double _minimumScale;
    NSString *_notificationTitle;
    NSString *_notificationText;
    NSString *_menuLabel;
    NSString *_tourID;
    NSString *_platform;
    NSArray *_forSystems;
    NSString *_showNotificationText;
    NSString *_closeNotificationText;
    NSString *_laterNotificationText;
    NSArray *_remindMeLaterTitles;
    NSString *_neverRemindMeText;
    NSString *_locale;
}

+ (id)jsonForTours:(id)arg1 forConfig:(BOOL)arg2;
+ (id)matchesForProfile:(id)arg1 inList:(id)arg2;
+ (id)notifyableMatchesForProfile:(id)arg1 inList:(id)arg2;
+ (id)lprojURLsForTour:(id)arg1 preferredLocalizations:(id)arg2;
+ (id)localesURLForTour:(id)arg1;
+ (id)loadLocalizedTextForPreferredLocalizations:(id)arg1 forJSON:(id)arg2 atConfigURL:(id)arg3;
+ (id)tourWithDictionary:(id)arg1 forConfig:(BOOL)arg2;
+ (BOOL)_loadToursForJSON:(id)arg1 atURL:(id)arg2 forProfile:(id)arg3;
+ (id)addLocalizedStringForKey:(id)arg1 inLocalizedStrings:(id)arg2 inDictionary:(id)arg3;
+ (id)cacheMergedDictionaryForJSON:(id)arg1 tour:(id)arg2 tourIndex:(unsigned long long)arg3 andLocalizedStrings:(id)arg4 forID:(id)arg5 forLocale:(id)arg6 atURL:(id)arg7;
+ (BOOL)loadAndCacheConfigWithURL:(id)arg1 forProfile:(id)arg2;
+ (id)cachePathForImageAtURL:(id)arg1;
+ (id)cachedDictionary;
+ (void)persistCacheDictionary:(id)arg1;
+ (id)cachePath;
+ (void)clearCachedConfig;
+ (id)getCachedTour:(id)arg1;
+ (void)cacheTour:(id)arg1 index:(unsigned long long)arg2 tourCount:(unsigned long long)arg3;
+ (id)tourSession;
+ (id)cachedTours;
+ (id)cachedObjectForKey:(id)arg1;
+ (void)cacheObject:(id)arg1 forKey:(id)arg2;
@property BOOL isWaxwingTour; // @synthesize isWaxwingTour=_isWaxwingTour;
@property(retain) NSString *locale; // @synthesize locale=_locale;
@property(retain) NSString *neverRemindMeText; // @synthesize neverRemindMeText=_neverRemindMeText;
@property(retain) NSArray *remindMeLaterTitles; // @synthesize remindMeLaterTitles=_remindMeLaterTitles;
@property(retain) NSString *laterNotificationText; // @synthesize laterNotificationText=_laterNotificationText;
@property(retain) NSString *closeNotificationText; // @synthesize closeNotificationText=_closeNotificationText;
@property(retain) NSString *showNotificationText; // @synthesize showNotificationText=_showNotificationText;
@property(retain) NSArray *forSystems; // @synthesize forSystems=_forSystems;
@property(retain) NSString *platform; // @synthesize platform=_platform;
@property(retain) NSString *tourID; // @synthesize tourID=_tourID;
@property(retain) NSString *menuLabel; // @synthesize menuLabel=_menuLabel;
@property(retain) NSString *notificationText; // @synthesize notificationText=_notificationText;
@property(retain) NSString *notificationTitle; // @synthesize notificationTitle=_notificationTitle;
@property double minimumScale; // @synthesize minimumScale=_minimumScale;
@property(retain) NSArray *boardIDs; // @synthesize boardIDs=_boardIDs;
@property unsigned long long type; // @synthesize type=_type;
@property(retain) NSURL *assetURL; // @synthesize assetURL=_assetURL;
@property(retain) NSURL *url; // @synthesize url=_url;
- (void).cxx_destruct;
- (id)description;
- (id)typeDescription;
- (void)updateKVStoreItems:(id)arg1;
- (void)sychronizeHasBeenViewediCloud:(id)arg1;
- (void)setHasBeenViewed:(BOOL)arg1;
- (BOOL)hasBeenViewedInProfile:(id)arg1;
- (BOOL)isIrrelevantInList:(id)arg1 forProfile:(id)arg2;
@property(retain) NSDate *nextNotificationDue;
- (struct __CFString *)nextNotificationDueKey;
@property unsigned long long numberOfNotificationsShown;
- (struct __CFString *)numNotificationsPrefsKey;
- (struct __CFString *)viewedPrefsKey;
- (struct __CFString *)sierraViewedPrefsKey;
- (id)constructURLWithParameters;
- (void)openInSafari:(id)arg1;
- (BOOL)isReachable;
- (BOOL)matchesLocale:(id)arg1;
- (BOOL)validateString:(id)arg1;
- (BOOL)matchesSystem:(id)arg1;
- (BOOL)matchesHardware:(id)arg1;
- (BOOL)matchesPlatform:(id)arg1;
- (BOOL)matchesProfile:(id)arg1;
- (id)initWithURL:(id)arg1 tourID:(id)arg2 platform:(id)arg3 type:(unsigned long long)arg4 notificationTitle:(id)arg5 notificationText:(id)arg6 imagePath:(id)arg7 menuLabel:(id)arg8 boardIDs:(id)arg9 minimumScale:(double)arg10 previousSystems:(id)arg11 forSystems:(id)arg12 locales:(id)arg13;
- (id)dictionaryRepresentationForConfig:(BOOL)arg1;
- (BOOL)isEqual:(id)arg1;

@end

