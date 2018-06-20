//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class NSArray, NSPredicate, NSString;

@protocol _CDInteractionDeleting
- (void)deleteInteractionsWithBundleId:(NSString *)arg1 domainIdentifier:(NSString *)arg2 completionHandler:(void (^)(unsigned long long, NSError *))arg3;
- (void)deleteInteractionsWithBundleId:(NSString *)arg1 account:(NSString *)arg2 completionHandler:(void (^)(unsigned long long, NSError *))arg3;
- (void)deleteInteractionsWithBundleId:(NSString *)arg1 completionHandler:(void (^)(unsigned long long, NSError *))arg2;
- (void)deleteInteractionsMatchingPredicate:(NSPredicate *)arg1 sortDescriptors:(NSArray *)arg2 limit:(unsigned long long)arg3 completionHandler:(void (^)(unsigned long long, NSError *))arg4;
- (unsigned long long)deleteInteractionsWithBundleId:(NSString *)arg1 domainIdentifier:(NSString *)arg2 error:(id *)arg3;
- (unsigned long long)deleteInteractionsWithBundleId:(NSString *)arg1 account:(NSString *)arg2 error:(id *)arg3;
- (unsigned long long)deleteInteractionsWithBundleId:(NSString *)arg1 error:(id *)arg2;
- (unsigned long long)deleteInteractionsMatchingPredicate:(NSPredicate *)arg1 sortDescriptors:(NSArray *)arg2 limit:(unsigned long long)arg3 error:(id *)arg4;
@end

