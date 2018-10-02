//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSData, NSString, NSURL, PKContent, PKDataAccessor, PKDisplayProfile, PKImageSet;

@interface PKObject : NSObject <NSCopying, NSSecureCoding>
{
    PKContent *_content;
    PKImageSet *_imageSets[7];
    struct os_unfair_lock_s _lock;
    BOOL _initializedViaInitWithCoder;
    NSString *_uniqueID;
    NSData *_manifestHash;
    PKDataAccessor *_dataAccessor;
    PKDisplayProfile *_displayProfile;
    double _preferredImageScale;
    NSString *_preferredImageSuffix;
    NSURL *_webServiceURL;
    NSString *_authenticationToken;
    unsigned long long _settings;
    long long _shareCount;
}

+ (BOOL)supportsSecureCoding;
+ (unsigned long long)defaultSettings;
+ (BOOL)isValidObjectWithFileURL:(id)arg1 warnings:(id *)arg2 orError:(id *)arg3;
@property(readonly, nonatomic) BOOL initializedViaInitWithCoder; // @synthesize initializedViaInitWithCoder=_initializedViaInitWithCoder;
@property(nonatomic) long long shareCount; // @synthesize shareCount=_shareCount;
@property(nonatomic) unsigned long long settings; // @synthesize settings=_settings;
@property(copy, nonatomic) NSString *authenticationToken; // @synthesize authenticationToken=_authenticationToken;
@property(copy, nonatomic) NSURL *webServiceURL; // @synthesize webServiceURL=_webServiceURL;
@property(retain, nonatomic) NSString *preferredImageSuffix; // @synthesize preferredImageSuffix=_preferredImageSuffix;
@property(nonatomic) double preferredImageScale; // @synthesize preferredImageScale=_preferredImageScale;
@property(retain, nonatomic) PKDisplayProfile *displayProfile; // @synthesize displayProfile=_displayProfile;
@property(retain, nonatomic) PKDataAccessor *dataAccessor; // @synthesize dataAccessor=_dataAccessor;
@property(copy, nonatomic) NSData *manifestHash; // @synthesize manifestHash=_manifestHash;
@property(copy, nonatomic) NSString *uniqueID; // @synthesize uniqueID=_uniqueID;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setMissingImageSetsFromObject:(id)arg1;
- (BOOL)isImageSetType:(long long)arg1 equalToImageSetTypeFromObject:(id)arg2;
- (id)imageSetLoadedIfNeeded:(long long)arg1;
- (id)contentLoadedIfNeeded;
- (id)dataForBundleResources:(id)arg1;
- (id)dataForBundleResourceNamed:(id)arg1 withExtension:(id)arg2;
- (void)reloadDisplayProfileOfType:(long long)arg1;
- (void)setSettingsWithoutUpdatingDataAccessor:(unsigned long long)arg1;
- (id)modificationDate;
- (id)serializedFileWrapper;
- (id)archiveData;
- (id)localizedString:(id)arg1;
- (void)downloadRemoteAssetsWithCloudStoreCoordinatorDelegate:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)downloadRemoteAssetsWithCompletion:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) BOOL remoteAssetsDownloaded;
- (void)noteShared;
- (void)requestUpdateWithCompletion:(CDUnknownBlockType)arg1;
- (void)revocationStatusWithCompletion:(CDUnknownBlockType)arg1;
- (void)updateImageSetForURL:(id)arg1 withCacheURL:(id)arg2;
- (void)flushLoadedImageSets;
- (void)loadImageSetAsync:(long long)arg1 preheat:(BOOL)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)loadImageSetSync:(long long)arg1 preheat:(BOOL)arg2;
- (void)setImageSet:(id)arg1 forImageSetType:(long long)arg2;
- (BOOL)isImageSetLoaded:(long long)arg1;
- (void)flushFormattedFieldValues;
- (void)flushLoadedContent;
- (void)loadContentAsyncWithCompletion:(CDUnknownBlockType)arg1;
- (void)loadContentSync;
- (BOOL)isContentLoaded;
- (void)setContent:(id)arg1;
- (id)content;
- (void)dealloc;
- (id)initWithDictionary:(id)arg1 bundle:(id)arg2;
- (id)init;
- (id)initWithFileDataAccessor:(id)arg1;
- (id)initWithFileURL:(id)arg1 validate:(BOOL)arg2 warnings:(id *)arg3 orError:(id *)arg4;
- (id)initWithFileURL:(id)arg1 warnings:(id *)arg2 orError:(id *)arg3;
- (id)initWithFileURL:(id)arg1 error:(id *)arg2;
- (id)initWithData:(id)arg1 warnings:(id *)arg2 orError:(id *)arg3;
- (id)initWithData:(id)arg1 error:(id *)arg2;

@end

