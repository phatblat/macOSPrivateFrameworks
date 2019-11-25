//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CNUIPRLikenessResolver.h"

@class CNContactStore, CNUIMeContactMonitor, NSString;

@interface CNUIPRLikenessLookup : NSObject <CNUIPRLikenessResolver>
{
    long long _prohibitedSources;
    CNContactStore *_contactStore;
    id <CNSchedulerProvider> _schedulerProvider;
    CNUIMeContactMonitor *_meMonitor;
    id <CNUIPlaceholderProviderFactory> _placeholderProviderFactory;
}

+ (id)contactFuture:(id)arg1 contactStore:(id)arg2 scheduler:(id)arg3;
+ (id)photoObservableWithPhotoFuture:(id)arg1 scheduler:(id)arg2;
+ (id)observableFromLikenessProviderBlock:(CDUnknownBlockType)arg1 withScheduler:(id)arg2;
+ (id)basicMonogramObservableFromString:(id)arg1 color:(id)arg2;
+ (id)basicMonogramObservableForContactFuture:(id)arg1 monogramColor:(id)arg2;
+ (id)descriptorForRequiredKeys;
@property(retain, nonatomic) id <CNUIPlaceholderProviderFactory> placeholderProviderFactory; // @synthesize placeholderProviderFactory=_placeholderProviderFactory;
@property(retain, nonatomic) CNUIMeContactMonitor *meMonitor; // @synthesize meMonitor=_meMonitor;
@property(readonly, nonatomic) id <CNSchedulerProvider> schedulerProvider; // @synthesize schedulerProvider=_schedulerProvider;
@property(readonly, nonatomic) CNContactStore *contactStore; // @synthesize contactStore=_contactStore;
@property(nonatomic) long long prohibitedSources; // @synthesize prohibitedSources=_prohibitedSources;
- (void).cxx_destruct;
- (id)photoFutureForContactFuture:(id)arg1 photoFuture:(id)arg2 allowingFallbackForMeCard:(BOOL)arg3;
- (id)photoFutureForContactFuture:(id)arg1 scheduler:(id)arg2;
- (BOOL)isMeContact:(id)arg1;
- (BOOL)mayIncludeSource:(long long)arg1;
- (id)silhouetteWithPlaceholderProviderFactory:(id)arg1 workScheduler:(id)arg2;
- (id)basicMonogramObservableFromString:(id)arg1 color:(id)arg2;
- (id)basicMonogramObservableWithContactFuture:(id)arg1 monogramColor:(id)arg2;
- (id)remoteImagesObservableWithContactFuture:(id)arg1 workScheduler:(id)arg2;
- (id)blessedPhotoObservableWithFuture:(id)arg1 contact:(id)arg2 workScheduler:(id)arg3;
- (id)loadingPlaceholderWithPlaceholderProviderFactory:(id)arg1;
- (id)contentObservableForContact:(id)arg1 placeholderProviderFactory:(id)arg2 options:(id)arg3 workScheduler:(id)arg4;
- (id)likenessObservableForContact:(id)arg1 placeholderProviderFactory:(id)arg2 options:(id)arg3 workScheduler:(id)arg4;
- (id)likenessesForContact:(id)arg1 options:(id)arg2 workScheduler:(id)arg3;
- (id)likenessesForContact:(id)arg1 workScheduler:(id)arg2;
- (id)resolveLikenessesForContacts:(id)arg1 workScheduler:(id)arg2 withContentHandler:(CDUnknownBlockType)arg3;
- (id)initWithContactStore:(id)arg1 scheduler:(id)arg2;
- (id)initWithContactStore:(id)arg1 schedulerProvider:(id)arg2;
- (id)initWithContactStore:(id)arg1 scheduler:(id)arg2 meMonitor:(id)arg3;
- (id)initWithContactStore:(id)arg1 schedulerProvider:(id)arg2 meMonitor:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

