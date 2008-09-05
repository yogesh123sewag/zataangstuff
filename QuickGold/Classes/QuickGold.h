//
//  QuickGold.h
//  QuickGold
//

#import <UIKit/UIKit.h>
#import <AddressBook/AddressBook.h>

@interface UIKeyboard : UIView { 
};

+ (id) automaticKeyboard;
- (void)orderInWithAnimation:(BOOL)fp8;
- (void)orderOutWithAnimation:(BOOL)fp8;

@end


NSBundle * myBundle;

@interface QuickGold : NSObject <UISearchBarDelegate, UITableViewDataSource, UITableViewDelegate, UITextFieldDelegate> {
    UIWindow *browserWindow;
    bool isDisplaying;
    UISearchBar *searchBar;
    UITextField *searchField;
    UITableView *matchTable;
}

- (void) didInjectIntoProgram;
- (void) loadApplications;
- (void) loadAddressBookEntries;
- (void) loadWebClips;
- (void) hideBrowser;
- (void) displayBrowser;
- (void) toggleBrowser;
- (void) showKeyboard:(BOOL) show;
- (void) computeMatches:(NSString *) searchText;
- (void) customLaunch:(id)what withType:(NSString *)type;
- (BOOL) isNumber:(NSString *)text;

- (BOOL)searchBarShouldBeginEditing:(UISearchBar *)searchBar;
- (void)searchBar:(UISearchBar *)searchBar textDidChange:(NSString *)searchText;

- (NSInteger)numberOfSectionsInTableView:(UITableView *)tableView;
- (NSInteger)tableView:(UITableView *)tableView numberOfRowsInSection:(NSInteger)section;
- (void)tableView:(UITableView *)tableView didSelectRowAtIndexPath:(NSIndexPath *)newIndexPath;

- (BOOL)textFieldShouldReturn:(UITextField *)textField;

@end
