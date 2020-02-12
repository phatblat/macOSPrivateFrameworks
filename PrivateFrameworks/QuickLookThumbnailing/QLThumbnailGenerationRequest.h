//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class FPItem, FPSandboxingURLWrapper, NSDate, NSError, NSString, NSURL, NSUUID, QLCacheBasicVersionedFileIdentifier, QLCacheFileProviderVersionedFileIdentifier, QLThumbnailRepresentation;

@interface QLThumbnailGenerationRequest : NSObject <NSCopying, NSSecureCoding>
{
    BOOL _iconMode;
    BOOL _wantsBaseline;
    BOOL _cancelled;
    BOOL _finished;
    BOOL _downloadingAllowed;
    int _interpolationQuality;
    NSString *_contentType;
    double _minimumDimension;
    double _scale;
    unsigned long long _representationTypes;
    FPSandboxingURLWrapper *_quicklookSandboxWrapper;
    FPSandboxingURLWrapper *_genericSandboxWrapper;
    NSURL *_fileURL;
    FPItem *_item;
    NSUUID *_uuid;
    QLCacheBasicVersionedFileIdentifier *_basicFileIdentifier;
    QLCacheFileProviderVersionedFileIdentifier *_fileProviderFileIdentifier;
    unsigned long long _badgeType;
    long long _iconVariant;
    long long _generationBehavior;
    NSError *_requestIsInvalidError;
    NSDate *_beginDate;
    QLThumbnailRepresentation *_mostRepresentativeThumbnail;
    CDUnknownBlockType _updateBlock;
    CDUnknownBlockType _completionBlock;
    CDUnknownBlockType _statusBlock;
    FPSandboxingURLWrapper *_saveURLSandboxWrapper;
    NSString *_saveURLContentType;
    unsigned long long _typesForWhichUpdateBlockHasBeenCalled;
    NSString *_overriddenContentType;
    struct CGSize _size;
}

+ (BOOL)supportsSecureCoding;
+ (id)_basicFileIdentifierForURL:(id)arg1 error:(id *)arg2;
+ (id)_fileProviderFileIdentifierForFPItem:(id)arg1;
+ (id)requestWithThumbnailRequest:(id)arg1;
@property(retain, nonatomic) NSString *overriddenContentType; // @synthesize overriddenContentType=_overriddenContentType;
@property(nonatomic) unsigned long long typesForWhichUpdateBlockHasBeenCalled; // @synthesize typesForWhichUpdateBlockHasBeenCalled=_typesForWhichUpdateBlockHasBeenCalled;
@property(copy, nonatomic) NSString *saveURLContentType; // @synthesize saveURLContentType=_saveURLContentType;
@property(nonatomic, getter=isDownloadingAllowed) BOOL downloadingAllowed; // @synthesize downloadingAllowed=_downloadingAllowed;
@property(retain, nonatomic) FPSandboxingURLWrapper *saveURLSandboxWrapper; // @synthesize saveURLSandboxWrapper=_saveURLSandboxWrapper;
@property(copy, nonatomic) CDUnknownBlockType statusBlock; // @synthesize statusBlock=_statusBlock;
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(copy, nonatomic) CDUnknownBlockType updateBlock; // @synthesize updateBlock=_updateBlock;
@property(retain, nonatomic) QLThumbnailRepresentation *mostRepresentativeThumbnail; // @synthesize mostRepresentativeThumbnail=_mostRepresentativeThumbnail;
@property(retain, nonatomic) NSDate *beginDate; // @synthesize beginDate=_beginDate;
@property(nonatomic, getter=isFinished) BOOL finished; // @synthesize finished=_finished;
@property(nonatomic, getter=isCancelled) BOOL cancelled; // @synthesize cancelled=_cancelled;
@property(retain, nonatomic) NSError *requestIsInvalidError; // @synthesize requestIsInvalidError=_requestIsInvalidError;
@property(nonatomic) int interpolationQuality; // @synthesize interpolationQuality=_interpolationQuality;
@property(nonatomic) long long generationBehavior; // @synthesize generationBehavior=_generationBehavior;
@property(nonatomic) BOOL wantsBaseline; // @synthesize wantsBaseline=_wantsBaseline;
@property(nonatomic) long long iconVariant; // @synthesize iconVariant=_iconVariant;
@property(nonatomic) unsigned long long badgeType; // @synthesize badgeType=_badgeType;
@property(retain, nonatomic) QLCacheFileProviderVersionedFileIdentifier *fileProviderFileIdentifier; // @synthesize fileProviderFileIdentifier=_fileProviderFileIdentifier;
@property(retain, nonatomic) QLCacheBasicVersionedFileIdentifier *basicFileIdentifier; // @synthesize basicFileIdentifier=_basicFileIdentifier;
@property(retain, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
@property(retain, nonatomic) FPItem *item; // @synthesize item=_item;
@property(retain, nonatomic) NSURL *fileURL; // @synthesize fileURL=_fileURL;
@property(retain, nonatomic) FPSandboxingURLWrapper *genericSandboxWrapper; // @synthesize genericSandboxWrapper=_genericSandboxWrapper;
@property(retain, nonatomic) FPSandboxingURLWrapper *quicklookSandboxWrapper; // @synthesize quicklookSandboxWrapper=_quicklookSandboxWrapper;
@property(nonatomic) unsigned long long representationTypes; // @synthesize representationTypes=_representationTypes;
@property(nonatomic) double scale; // @synthesize scale=_scale;
@property(nonatomic) struct CGSize size; // @synthesize size=_size;
@property(nonatomic) BOOL iconMode; // @synthesize iconMode=_iconMode;
@property(nonatomic) double minimumDimension; // @synthesize minimumDimension=_minimumDimension;
- (void).cxx_destruct;
- (void)noteUpdateBlockHasBeenCalledForType:(long long)arg1;
- (BOOL)isValid;
- (BOOL)prepareForSending;
- (id)_stateDescription;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithSize:(struct CGSize)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (long long)compare:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)equivalentFPItemRequestWithItem:(id)arg1 representationTypes:(unsigned long long)arg2;
- (BOOL)resultShouldBeSavedToDisk;
- (BOOL)isFileBased;
- (BOOL)isUbiquitous;
- (long long)requestedMostRepresentativeType;
- (BOOL)forceGeneration;
- (BOOL)provideCachedResultsOnly;
- (BOOL)provideFullResolutionThumbnail;
- (BOOL)provideLowQualityThumbnail;
- (BOOL)provideGenericIcon;
@property(retain, nonatomic) NSString *contentType; // @synthesize contentType=_contentType;
- (float)maximumPixelSize;
- (id)saveURL;
- (id)fileIdentifier;
- (void)setSaveURL:(id)arg1;
- (id)initWithFPItem:(id)arg1 size:(struct CGSize)arg2 scale:(double)arg3 representationTypes:(unsigned long long)arg4;
- (id)initWithFileAtURL:(id)arg1 size:(struct CGSize)arg2 scale:(double)arg3 representationTypes:(unsigned long long)arg4;
- (id)initWithSize:(struct CGSize)arg1 scale:(double)arg2 representationTypes:(unsigned long long)arg3;
@property(readonly, nonatomic) long long mostRepresentativeTypeForWhichUpdateBlockHasBeenCalled;
- (BOOL)thumbnailRepresentationTypeMatchesRequestedMostRepresentativeType:(long long)arg1;
- (void)markDidBegin;
- (void)finish;
- (void)cancel;

@end

