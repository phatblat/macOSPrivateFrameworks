//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSViewController.h"

#import "NSTableViewDataSource.h"
#import "NSTableViewDelegate.h"

@class NSString, NSTableView;

@interface TLKTableViewController : NSViewController <NSTableViewDataSource, NSTableViewDelegate>
{
    NSTableView *_tableView;
}

@property(retain, nonatomic) NSTableView *tableView; // @synthesize tableView=_tableView;
- (void).cxx_destruct;
- (void)selectRow:(unsigned long long)arg1;
@property(readonly) unsigned long long selectedRow;
- (void)reloadData;
- (id)rowViewForRow:(unsigned long long)arg1;
- (id)cellViewForRow:(unsigned long long)arg1;
- (id)tableView:(id)arg1 viewForTableColumn:(id)arg2 row:(long long)arg3;
- (id)tableView:(id)arg1 rowViewForRow:(long long)arg2;
- (long long)numberOfRowsInTableView:(id)arg1;
@property(readonly) unsigned long long numberOfRows;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
