//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotoPrintProduct/KHDBUuidModel.h>

@interface KHDBOpenableModel : KHDBUuidModel
{
    unsigned long long _openChangesMask;
}

- (void)close;
- (void)open;
- (void)includeInOpenChanges:(unsigned long long)arg1;
- (unsigned long long)setToClosed;
- (void)setIsOpen:(BOOL)arg1;
- (BOOL)isOpen;

@end
