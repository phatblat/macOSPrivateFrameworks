//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class AMPArtworkSourceInfo, NSArray, NSData, NSString;

@protocol AMPArtworkProtocol
- (void)purgeAllItemsforDatabase:(unsigned long long)arg1 withReply:(void (^)(NSError *))arg2;
- (void)removeArtworkWithArray:(NSArray *)arg1 withReply:(void (^)(NSError *))arg2;
- (void)removeArtwork:(unsigned long long)arg1 forUUID:(NSString *)arg2 withReply:(void (^)(unsigned long long, NSError *))arg3;
- (void)setRemoteArtworkForInfo:(NSArray *)arg1 forDatabase:(unsigned long long)arg2 withReply:(void (^)(NSArray *, NSError *))arg3;
- (void)setArtwork:(NSData *)arg1 forInfo:(AMPArtworkSourceInfo *)arg2 forDatabase:(unsigned long long)arg3 withReply:(void (^)(AMPSetArtworkResponse *, NSError *))arg4;
- (void)fetchArtwork:(NSArray *)arg1 withReply:(void (^)(NSArray *, NSError *))arg2;
- (void)lookupArtworkForInfo:(NSArray *)arg1 forDatabase:(unsigned long long)arg2 withReply:(void (^)(NSArray *, NSError *))arg3;
- (void)closeDatabase:(unsigned long long)arg1 withReply:(void (^)(NSError *))arg2;
- (void)openDatabase:(unsigned long long)arg1 forKind:(unsigned long long)arg2 withReply:(void (^)(NSError *))arg3;
@end

