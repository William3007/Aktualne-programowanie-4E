using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace LinqTasksConsoleApp
{
    internal class TaskItem(int id, string name, bool isCompleted)
    {
        public int Id { get; set; } = id;
        public string Name { get; set; } = name;
        public bool IsCompleted { get; set; } = isCompleted;

        public override string ToString()
        {
            return $"Id: {Id}, Name: {Name}, IsCompleted: {IsCompleted}";
        }
    }
}
