using Windows.UI.Xaml;
using Windows.UI.Xaml.Controls;
using RuntimeComponentCWrapper;

// The Blank Page item template is documented at https://go.microsoft.com/fwlink/?LinkId=402352&clcid=0x409

namespace UwpCSharpApp
{
    /// <summary>
    /// An empty page that can be used on its own or navigated to within a Frame.
    /// </summary>
    // ReSharper disable once RedundantExtendsListEntry
    public sealed partial class MainPage : Page
    {
        public MainPage()
        {
            InitializeComponent();
        }

        private void CalculateClick(object sender, RoutedEventArgs e)
        {
            int a = int.Parse(Addend1.Text);
            int b = int.Parse(Addend2.Text);

            TestCWrapper cWrapper = new TestCWrapper();

            int c = cWrapper.Add(a, b);

            Result.Text = $"{a} + {b} = {c}";
        }
    }
}
