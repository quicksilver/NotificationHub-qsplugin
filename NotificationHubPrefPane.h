//
//  NotificationHubPrefPane.h
//  NotificationHub
//
//  Created by Kevin Ballard on 3/28/05.
//  Copyright 2005 Kevin Ballard. All rights reserved.
//

@interface NotificationHubPrefPane : QSPreferencePane {
	IBOutlet NSPopUpButton *defaultPopup;
	IBOutlet NSButton *deleteButton;
	IBOutlet NSTableView *tableView;
	
	NSArray *notifiers;
	NSArray *notifications;
}
- (IBAction) addRow:(id)sender;
- (IBAction) removeRow:(id)sender;
- (IBAction) setDefaultNotifier:(id)sender;

- (void) updateNotifications:(NSNotification *)aNotification;

- (NSArray *) notifiers;
- (NSMenu *) notifierMenuWithSelector:(SEL)aSelector;
@end
