//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <FileProvider/FPProviderDomain.h>

#import "NSSecureCoding.h"

@class NSArray, NSFileProviderDomain, NSString, NSURL;

@interface FPProvider : FPProviderDomain <NSSecureCoding>
{
    NSArray *_supportedSortDescriptors;
    long long _type;
}

+ (void)fetchProviderForItem:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (void)endMonitoringProviderChanges:(id)arg1;
+ (id)beginMonitoringProviderChangesWithHandler:(CDUnknownBlockType)arg1;
+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
@property(readonly, nonatomic) NSArray *supportedSortDescriptors; // @synthesize supportedSortDescriptors=_supportedSortDescriptors;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSURL *storageURL;
@property(readonly, nonatomic) NSURL *bundleURL;
@property(readonly, nonatomic) NSString *providerIdentifier;
@property(readonly, nonatomic) NSString *localizedName;
- (id)localizedTitleForSortDescriptor:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(readonly, nonatomic) NSFileProviderDomain *domain; // @dynamic domain;
@property(readonly, nonatomic) NSString *identifier; // @dynamic identifier;

@end

