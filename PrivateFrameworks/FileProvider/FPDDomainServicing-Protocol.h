//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class FPExtensionEnumerationSettings, FPItemID, NSArray, NSFileProviderRequest, NSString;

@protocol FPDDomainServicing
- (void)_t_setFilePresenterObserver:(id <FPFilePresenterObserver>)arg1;
- (void)fetchAndStartEnumeratingWithSettings:(FPExtensionEnumerationSettings *)arg1 observer:(id <FPXEnumeratorObserver>)arg2 request:(NSFileProviderRequest *)arg3 completionHandler:(void (^)(id <FPXEnumerator>, id <FPDLifetimeServicing>, NSError *))arg4;
- (void)setDomainWithIdentifier:(NSString *)arg1 ejectable:(BOOL)arg2 completionHandler:(void (^)(NSError *))arg3;
- (void)deleteSearchableItemsWithSpotlightDomainIdentifiers:(NSArray *)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)resolveItemID:(FPItemID *)arg1 completionHandler:(void (^)(NSURL *, NSError *))arg2;
- (void)didChangeItemID:(FPItemID *)arg1 completionHandler:(void (^)(NSError *))arg2;
@end
